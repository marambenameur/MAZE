#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <time.h>

typedef enum {RIGHT ,LEFT,}Direction;
int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *detective = NULL;
    SDL_Rect positionM;
    SDL_Event event;
    int continuer = 1;
    int tempsPrecedent = 0, tempsActuel = 0;
Direction sens ;
    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Gestion du temps en SDL", NULL);

    detective = IMG_Load("image.png");
    SDL_SetColorKey( detective , SDL_SRCCOLORKEY, SDL_MapRGB(detective->format, 0, 0, 255));

    positionM.x = ecran->w / 2 - detective->w / 2;
    positionM.y = ecran->h / 2 - detective->h / 2;

    SDL_EnableKeyRepeat(10, 10);

    while (continuer)
    {
        SDL_PollEvent(&event); /* On utilise PollEvent et non WaitEvent pour ne pas bloquer le programme */
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
        }

        tempsActuel = SDL_GetTicks();
        if (tempsActuel - tempsPrecedent > 25) /* Si 30 ms se sont écoulées depuis le dernier tour de boucle */
        {switch (sens ) 
 {case LEFT :
            positionM.x-=5;

                break ;  
case RIGHT :
positionM.x+=5 ;
break ;}
if (positionM.x >= 640 )
                    sens = LEFT ;

else if (positionM.x<=20 )

sens =RIGHT ;
                    /* On bouge image */
            tempsPrecedent = tempsActuel; /* Le temps "actuel" devient le temps "precedent" pour nos futurs calculs */
        }

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
        SDL_BlitSurface(detective, NULL, ecran, &positionM);
        SDL_Flip(ecran);
    }

    SDL_FreeSurface(detective);
SDL_FreeSurface (ecran);
    SDL_Quit();

    return EXIT_SUCCESS;
}
