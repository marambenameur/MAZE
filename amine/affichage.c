#include "affichage.h"
#include "initennemi.h"

void affichage (ennemi *e,SDL_Surface *ecran)
{int i ;

for (i=0;i<4;i++)
{
SDL_BlitSurface (e[i].maze,NULL,ecran,&e[i].pos);
}
}
