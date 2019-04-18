
#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL_image.h"
#include "SDL/SDL.h"
#include "SDL/SDL_mixer.h"
#include "initennemi.h"
//#include "affichage.h"




void init_ennemi (ennemi e[],SDL_Surface *ecran,SDL_Surface * maze)

{
maze=IMG_Load ("maze.png");
SDL_Rect *pos ;

e[0].maze=IMG_Load("maze0.png");
e[0].pos.x=0;
e[0].pos.y=0;
/*
e[0].pos->h=0;
e[0].pos->w=0;*/
SDL_BlitSurface (e[0].maze,NULL,ecran,&e[0].pos);

e[1].maze=IMG_Load("maze1.png");
e[1].pos.x=0;
e[1].pos.y=0;
/*
e[1].pos->h=0;
e[1].pos->w=0;*/
SDL_BlitSurface (e[1].maze,NULL,ecran,&e[1].pos);

e[2].maze=IMG_Load("maze2.png");
e[2].pos.x=0;
e[2].pos.y=0;
/*
e[2].pos.h=0;
e[2].pos->w=0;*/
SDL_BlitSurface (e[2].maze,NULL,ecran,&e[2].pos);

e[3].maze=IMG_Load("maze3.png");
e[3].pos.x=0;
e[3].pos.y=0;
/*
e[3].pos->h=0;
e[3].pos->w=0;*/
SDL_BlitSurface (e[3].maze,NULL,ecran,&e[3].pos);







}
