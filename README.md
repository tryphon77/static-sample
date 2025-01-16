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
