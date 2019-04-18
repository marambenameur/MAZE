#ifndef main_H_INCLUDED
#define main_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL_image.h"
#include "SDL/SDL.h"
#include "SDL/SDL_mixer.h"
//#include "initennemi.h"
//#include "affichage.h"
typedef struct
{
SDL_Surface *maze;
SDL_Rect pos ;

}ennemi;


void affichage (ennemi *e,SDL_Surface *ecran);
void main(SDL_Surface *ecran);
#endif
