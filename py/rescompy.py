# -*- coding: utf-8 -*-

import yaml
from sprite import process_sprite


cmds = {
	"PALETTE": None, 
	"SPRITE": process_sprite, 
	"END": None
}

def list_of_int(l):
	print("list_of_int: %s" % (l,))
	return [int(x.strip()) for x in l.split(",")]

SPRITE_params = [
	("name", str, ""), 
	("path", str, ""), 
	("cellwidth", int, 8), 
	("cellheight", int, 8), 
	("hotspot", list, ("LEFT", "TOP")),
	("time", int, 8), 
	("timings", list_of_int, []), 
	("loop", int, 0),
	("compression", str, "NONE"), 
	("collision", str, "NONE"),
	("algo", int, 1),
	("opt", str, "BALANCED"),
	("iterations", int, 1000)
]

params = {
	"SPRITE": SPRITE_params
}


def process_entry(entry):
	splitted = []
	current = ""
	level_delim = 0
	for c in entry:
		if level_delim == 0:
			if c == "(":
				level_delim += 1	
			elif c in " =":
				if current:
					splitted.append(current)
				if c == "=":
					splitted.append("=")
				current = ""			
			else:
				current += c
		
		else:
			if c == ")":
#				current = "(" + current + ")"
				level_delim -= 1
			else:
				current += c
	
	if current:
		splitted.append(current)
		
#	print(splitted)
	if "=" in splitted:
		i = splitted.index("=")
		kvargs = splitted[i-1:]
		splitted = splitted[:i-1]
	else:
		kvargs = []

	cmd = splitted[0]
	cmd_params = params[cmd]	
	res = {"cmd": cmd}
	for i in range(len(cmd_params)):
		if i < len(splitted) - 1:
			k, t, _ = cmd_params[i]
#			print(k, t, splitted[i + 1])
			res[k] = t(splitted[i + 1])
		else:
			k, _, v = cmd_params[i]
			res[k] = v

	i = 0
	while i < len(kvargs):
		assert(kvargs[i + 1] == "=")
		res[kvargs[i]] = kvargs[i + 2]
		i += 3
	
#	print(res)
	
	return res

def process_kvargs(kvargs):
	if type(kvargs) != dict:
		return kvargs
	
	for k in kvargs.copy():
		v = kvargs[k]
		if type(k) is int:
			new_k = tuple([k])
			kvargs[new_k] = process_kvargs(v)
			kvargs.pop(k)
			
		if type(k) is str:
			if "-" in k:
				a_, b_ = k.split("-")
				new_k = tuple(range(int(a_.strip()), int(b_.strip())))
				kvargs[new_k] = process_kvargs(v)
				kvargs.pop(k)
			elif "," in k:
				new_k = tuple([int(x.strip()) for x in k.split(",")])
				kvargs[new_k] = process_kvargs(v)
				kvargs.pop(k)
	return kvargs
			

def process(doc, base_dir="", out_dir=""):
	lines = doc.split("\n")
	i = 0
	attrs = []
	current = {}
	res = [current]

	def ship_cmd():
		if current:
			if attrs:
				processed_attrs = process_kvargs(yaml.load("\n".join(attrs), Loader=yaml.FullLoader))
				current.update(processed_attrs)

			process_cmd = cmds[current["cmd"]]
			if process_cmd:
				process_cmd(current, base_dir, out_dir)
			else:
				print(current)
				print("cmd %s ignored" % current["cmd"])

	while i < len(lines):
		line = lines[i]
		i += 1
		
		if line.strip():
			if line.startswith("  "):
				attrs.append(line)
			else:
				# ship current cmd				
				ship_cmd()

				current = process_entry(line)
				res.append(current)

#		if attrs:
#			processed_attrs = process_kvargs(yaml.load("\n".join(attrs), Loader=yaml.FullLoader))
#			print(processed_attrs)
#			current.update(processed_attrs)
	
	ship_cmd()
	
	return res

import os
res_dir = "ressources"
out_dir = "src"
# os.chdir(res_dir)

with os.scandir(res_dir) as entries:
	for entry in entries:
		if entry.name.endswith(".res"):
			print("processing: %s" % entry.name)

			with open(entry) as f:
				document = f.read()
			process(document, res_dir, out_dir)
			

