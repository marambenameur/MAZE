#include "main.h"


void afficher_background(backgr *bg)
{
bg->pos.x=0;
bg->pos.y=0;
image=IMG_Load("65.png");
SDL_BlitSurface(image,NULL,ecran,&bg->pos);
}

void afficher_background1(backgr *bg1)
{
bg1->pos.x=650;
bg1->pos.y=0;
image=IMG_Load("65.png");
SDL_BlitSurface(image,NULL,ecran,&bg1->pos);
}

int main(int argc, char *argv[])
{
SDL_Init(SDL_INIT_EVERYTHING);
ecran=SDL_SetVideoMode(1300,100,32,SDL_HWSURFACE);
backgr bg;
backgr bg1;
afficher_background(&bg);
afficher_background1(&bg1);
SDL_Flip(ecran);
pause();
}
