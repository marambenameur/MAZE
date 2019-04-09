
#ifdef FONCTIONS_H_
#define FONCTIONS_H_
#include <stdio.h>
#include <stdlib.h>

#include <SDL/SDL.h>

typedef struct 
{ SDL Surface *personnage;
  SDL Surface *ecran;
  SDL Surface *imageDeFond;

  SDL Rect position ;
  int nb_vies ;
  int score=0;
}Personnage;

void pause();
  


#endif /*FONCTIONS_H_ */  


