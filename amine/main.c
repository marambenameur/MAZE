#include "initennemi.h"


void main(SDL_Surface *ecran)
{
int mv[4]={0,0,0,0};
int done=1;

int continuer=1;
ennemi e[4];
SDL_Event event;
SDL_Surface *maze=NULL;
SDL_Surface *screen=NULL ;
SDL_Surface *image=NULL;
SDL_Rect positionecran;
SDL_Rect positionperso;
SDL_Surface *perso=NULL;
SDL_Init(SDL_INIT_VIDEO);

ecran=SDL_SetVideoMode(1270,800,32, SDL_HWSURFACE);
init_ennemi (e,ecran,maze);
do{
SDL_PollEvent(&event);
switch(event.type)
{
case SDL_QUIT:
continuer=0;
break;
}
affichage (e,ecran);
SDL_Flip(ecran);
}while(continuer);
SDL_FreeSurface(ecran);
SDL_Quit();
}
