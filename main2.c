
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>




void pause()
{
    int continuer = 1;
    SDL_Event event;
  
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}


int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *personnage = NULL;
    SDL_Rect positionFond, positionpersonnage;
    int continuer =1;

    positionFond.x = 0;
    positionFond.y = 0;
    positionpersonnage.x = 9;
    positionpersonnage.y = 240;    


    SDL_Init(SDL_INIT_VIDEO);//initialisation

   

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE); //creation fenetre 
    SDL_WM_SetCaption("Chargement d'images en SDL", NULL);

    /*chargement et blittage du fond */
    imageDeFond = SDL_LoadBMP("background.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    /* Chargement et blittage du personnage sur la scène */
    personnage  = IMG_Load("personnage.png");
    SDL_BlitSurface(personnage, NULL, ecran, &positionpersonnage);

    SDL_Flip(ecran);//mise a jour
    pause();


    SDL_FreeSurface(imageDeFond);
    SDL_FreeSurface(personnage);
    SDL_Quit();// arret de la SDL
    return EXIT_SUCCESS;
}

