#include "background.h"

int InitialserBackground(SDL_Surface *srceen,Background *B)
{
    //music
    Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,2,1024);//1 -> mono ** 2 -> sterio
    
    B->music= Mix_LoadMUS("background.mp3");
    Mix_VolumeMusic(50);
    Mix_PlayMusic(B->music,-1);//-1 play till the program ends ** n number of times
    if(B->music==NULL)
    {
        fprintf(stderr,"%s",Mix_GetError());
        return 0;
    }
    //image
    B->image=IMG_Load("background-game.png");
    if(B->image==NULL)
        return 0;
        
    return 1;
    
}
void AfficherBackground(SDL_Surface * screen,Background *B,int n)
{
    

 SDL_Rect pos;
    pos.x=0;
    if(B->n==1)
        pos.y=0;
    else if(B->n==2)
         pos.y=1000;
    if(InitialserBackground(screen,B)==0)
    {
        fprintf(stderr,"Erreur: %s",SDL_GetError());
    }
    SDL_BlitSurface(B->image,NULL,screen,&pos);
    SDL_Flip(screen);
}
/*int BackgroundPlay(SDL_Surface *srceen,Background B,SDL_Rect Per_Pos)

{
    //test de imge
    if(Background==NULL)
    {
        return 0;
    }
    //notre scree est 1000/600 donc je prend perso centrer avec position min :470
    // notre distance de perso est x=30 y=60
    SDL_Rect pos;
    pos.x=0;
    if(B->n==1)
        pos.y=0;
    else if(B->n=2)
         pos.y=1000;
    if(InitialserBackground(screen,&B)==0)
    {
        printf("\nimage background n'exist pas..");
    }
    //time systeme
    SYSTEMTIME t;
    GetLocalTime(&t);
    //music
    Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,2,1024);//1 -> mono ** 2 -> sterio
    Mix_Music *music;
    music= Mix_LoadMUS("background.mp3");
    Mix_VolumeMusic(50);
    Mix_PlayMusic(music,-1);//-1 play till the program ends ** n number of times
    if(Per_Pos.x>=470)
    {
        pos.x=Per_Pos-470;
        SDL_BlitSurface(B->image,NULL,Screen,&pos);
        SDL_Flip(screen);
    }
    Mix_CloseAudio();
    Mix_FreeMusic(music);
    return 1;
}*/

