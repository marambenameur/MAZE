#include "background.h"

int main()
{
Background B;
int continuer=1;
SDL_Event event;
int n;
SDL_Init(SDL_INIT_VIDEO);
//fenetre principale
SDL_Surface *screen=NULL;
screen=SDL_SetVideoMode (1000,600,0,SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_WM_SetCaption("123",NULL);//titre de la fenetre


while(continuer)
{
	
AfficherBackground(screen,&B,n);

SDL_WaitEvent(&event);
	if(event.type==SDL_QUIT)
	{
		continuer=0;
	}
}
}
