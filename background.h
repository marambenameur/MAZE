#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
typedef struct
{
    SDL_Surface *image;
    Mix_Music *music;
    int n;
}Background;
int InitialserBackground(SDL_Surface *screen,Background *B);
void AfficherBackground(SDL_Surface *screen,Background *B,int n);
//int BackgroundPlay(SDL_Surface *srceen,Background B,SDL_Rect Per_Pos);
#endif 
