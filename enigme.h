#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include <SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<string.h>
#include<time.h>



typedef struct enigme1
{
char tabQuestion[20][200];//tableau de toutes les questions
char tabReponse[38][40];//tableau de toutes les reponses
char QuestionGeneree[200];//question generee aleatoirement
char tabRepGeneree[4][40];//tableau des trois reponses generees avec la question aleatoire
SDL_Rect posBox;//position image
SDL_Surface* Box[20];//tableau de toutes les images
}enigme1;

enigme1 init_enigme1(enigme1 eni1);
int alea2();
enigme1 generer_alea_enigme1(enigme1 eni1,int alea);
int afficher_enigme1(enigme1 eni1,SDL_Surface* screen);


#endif // ENIGME_H_INCLUDED
