# Quelques possibilités d'amélioration de SGDK

## sprite engine

* ajout d'une fonction callback OnAnimationEnd qui s'exécute quand une animation est terminée
* les FrameVDPSprite->Offset sont signés, ce qui permet de centrer le sprite

## rescomp

### SPRITE

* comment spécifier une planche avec des images de taille différente ?

* préciser le hotspot, par frame

Soit en (x, y), soit en ("CENTER", "BOTTOM") par exemple.

* pouvoir préciser qu'un sprite possède une symétrie

Par exemple : un métasprite formé d'un VDPsprite (0, 0, 32, 16), avec un hotspot en (64, 64)
Avec l'option "hvmirror", on lui rajoute une version flippée du métasprite en (32, 48, 16, 16) 

Dans la déclaration des sprites :

* j'utilise les bits 4 et 5 du champs FrameVDPSprite->size pour stocker les flags v et here/raw/master/src/common/images/icon48

* Il faut tenir compte des nouveaux VDPsprites dans AnimationFrame->numFrames

* dans la liste des FrameVDPSprite, il faut mettre FrameVDPSprite->numTiles à 0 pour tous les VDPSprites sauf le dernier

Dans spr_eng.c :
* il faut modifier la màj du VDPSprite->size, aux lignes 1851 et 1876 :
```            vdpSprite->size = (frameSprite->size) & 0x0F; // facultatif, mais plus sûr```

* il faut modifier la valeur de l'attr aux lignes 1852 et 1878 :
```            vdpSprite->attribut = attr ^ ((frameSprite->size & 0xF0) << 7);```
On peut certainement faire ça mieux : 
* qu'en est-il en cas de plusieurs VDPsprites flippés ?




* pouvoir préciser qu'un VDPSprite peut être utilisé dans différents metasprites, y compris plusieurs fois

* préciser les timings de chaque frame


# Trucs à acheter

* fringues (pantalons, T-Shirt, Chemises, Chaussettes, calbuts)
* bédés
* plans de classe
* correction DC01
* cours 2nd degré
* correction Reff
* correction BAB^-1 (+ modifier le sujet)
* souris scanner
* godasses
* toile cirée
* boîtes de rangement pour dressing et sous le canapé
* sacs à couettes
* réécrire la leçon suites de 1ère en la coupant en deux
* élaguer la leçon limite de suites
* DM 1ère
* laver filtres
* laver sous le canapé et le piano

# Devoirs Valentin

Lundi :
* Physique / Chimie
* Anglais : Réviser les leçons sur le v. Aimer + Wb p.11 toute la page (la moitié)
* Français : P.87 cahier d'exercices + finir C'était mon oncle + Chercher et apporter un poème dont le sujet est un objet + Revoir les leçons de langue non acquises
* Mathématiques : DM Degrés dans le cloud

Mardi :
* Physique / Chimie
* Histoire-Géo : revoir la séquence Richesse et pauvreté évaluation + revoir fiche méthode présenter un document ( séquence 1)
* Anglais : Réviser les leçons sur le v. Aimer + Wb p.11 toute la page (la moitié)
* Français : P.87 cahier d'exercices + finir C'était mon oncle + Chercher et apporter un poème dont le sujet est un objet + Revoir les leçons de langue non acquises

Mercredi :
* Physique / Chimie
* Histoire-Géo : revoir la séquence Richesse et pauvreté évaluation + revoir fiche méthode présenter un document ( séquence 1)
* Anglais : Contrôle sur there is, there are et les v. De sentiments 
* Arts plastiques

# Devoirs Coralie
* Lire le livre choisi en classe et compléter la fiche de lecture.
* constitue une phrase
* nombre du jour

Dictées :


# des pommes

Et oui, des pommes

# des poires

Et oui, des poires aussi

# et des scoubidous

bibidous, *wa*...

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png)

```python
# Ceci est du python
def seuil(x):
	u = 1
	n = 0
	while abs(u - x) > 0.0001:
		u = 1 + 1/u
		n += 1
	return n
```

Et du C :
```C
// Ceci est du c
int seuil(float x) {
	float u = 1;
	int n = 0;
	while (fabs(u - x) > 0.0001) {
		u = 1 + 1/u;
		n++;
	}
}
```

