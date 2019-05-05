
#include"enigme.h"




enigme1 init_enigme1(enigme1 eni1)
{
FILE* f=fopen("r.txt","r");
char a[50],b[50],c[50];
int i=0;
strcpy(eni1.tabQuestion[0],"whats the official capital of ivory coast ?");
strcpy(eni1.tabQuestion[1],"What's called the amount that you can hold while cupping your hands ?");
strcpy(eni1.tabQuestion[2],"What is my favorite website ?");
strcpy(eni1.tabQuestion[3],"Whats the world's most apreciated beverage ?");
strcpy(eni1.tabQuestion[4],"who is the most rich family ?");
strcpy(eni1.tabQuestion[5],"what is the most common name in ancient egypt ?");
strcpy(eni1.tabQuestion[6],"who is the actual president of The United States of America ?");
strcpy(eni1.tabQuestion[7],"Which desease is cured with cannabis oil ?");
strcpy(eni1.tabQuestion[8],"what is quebec's most appreciated dish ?");
strcpy(eni1.tabQuestion[9],"What takes 60 seconds to make a complete circle of the human body ?");
strcpy(eni1.tabQuestion[10],"what is the most important thing in a tunisian's cv ?");
strcpy(eni1.tabQuestion[11],"which physical states can water reach at the same time ?");
if (f!=NULL)
{
  while (i!=36)
  {
    fscanf(f,"%s %s %s\n",a,b,c);
    strcpy(eni1.tabReponse[i],a);
    i++;
    strcpy(eni1.tabReponse[i],b);
    i++;
    strcpy(eni1.tabReponse[i],c);
    i++;
  }
}
else
{
strcpy(eni1.tabReponse[i],"eot");
}
fclose(f);
eni1.Box[0]=IMG_Load("e1.png");
eni1.Box[1]=IMG_Load("eai.png");
eni1.Box[2]=IMG_Load("eac.png");
eni1.Box[3]=IMG_Load("eain.png");
eni1.Box[4]=IMG_Load("ebi.png");
eni1.Box[5]=IMG_Load("ebc.png");
eni1.Box[6]=IMG_Load("ebin.png");
eni1.Box[7]=IMG_Load("eci.png");
eni1.Box[8]=IMG_Load("ecc.png");
eni1.Box[9]=IMG_Load("ecin.png");
eni1.posBox.x=0;
eni1.posBox.y=0;
return eni1;
}
int alea2()
{
int a;
a=rand()%11 ;
return a;
}
enigme1 generer_alea_enigme1(enigme1 eni1,int alea)
{
strcpy(eni1.QuestionGeneree,eni1.tabQuestion[alea]);
strcpy(eni1.tabRepGeneree[0],eni1.tabReponse[alea*3]);
strcpy(eni1.tabRepGeneree[1],eni1.tabReponse[(alea*3)+1]);
strcpy(eni1.tabRepGeneree[2],eni1.tabReponse[(alea*3)+2]);
return eni1;
}


int afficher_enigme1(enigme1 eni1,SDL_Surface* screen)
{
int test=0,f=0;
SDL_Event event;
SDL_Color blanc={255,255,255};
TTF_Font* police=TTF_OpenFont("g.TTF",25);
TTF_Font* police1=TTF_OpenFont("g.TTF",50);
SDL_Surface* q=TTF_RenderText_Blended(police,eni1.QuestionGeneree,blanc);
SDL_Surface* a=TTF_RenderText_Blended(police,eni1.tabRepGeneree[0],blanc);
SDL_Surface* b=TTF_RenderText_Blended(police,eni1.tabRepGeneree[1],blanc);
SDL_Surface* c=TTF_RenderText_Blended(police,eni1.tabRepGeneree[2],blanc);
SDL_Rect posq,posa,posb,posc;
posq.x=190;
posq.y=140;
posa.x=100;
posa.y=390;
posb.x=890;
posb.y=390;
posc.x=550;
posc.y=600;
int x=1;
int alea;
while((x) && (test<4))
{
if (SDL_PollEvent(&event))
{
if (event.type==SDL_QUIT){x=0;}
if (event.type==SDL_MOUSEMOTION)
{
if ((event.motion.x>73) && (event.motion.x<472.5) && (event.motion.y>353) && (event.motion.y<516))
{
f=1;
}
else if ((event.motion.x>845) && (event.motion.x<1250) && (event.motion.y>353) && (event.motion.y<516))
{
f=4;
}
else if ((event.motion.x>464) && (event.motion.x<865) && (event.motion.y>528) && (event.motion.y<692))
{
f=7;
}
else
{
f=0;
}
}
if (event.type==SDL_MOUSEBUTTONDOWN)
{
if((event.button.button==SDL_BUTTON_LEFT) && (event.motion.x>73) && (event.motion.x<472.5) && (event.motion.y>353) && (event.motion.y<516))
{
if ((eni1.tabRepGeneree[0][0]=='P') || (eni1.tabRepGeneree[0][0]=='Y') || (eni1.tabRepGeneree[0][0]=='R') || (eni1.tabRepGeneree[0][0]=='B'))
{
f=2;
test++;
alea=alea2();
eni1=generer_alea_enigme1(eni1,alea);
}
else
{
f=3;
}
}
else if ((event.button.button==SDL_BUTTON_LEFT) && (event.motion.x>845) && (event.motion.x<1250) && (event.motion.y>353) && (event.motion.y<516))
{
if ((eni1.tabRepGeneree[1][0]=='P') || (eni1.tabRepGeneree[1][0]=='Y') || (eni1.tabRepGeneree[1][0]=='R') || (eni1.tabRepGeneree[1][0]=='B'))
{
f=5;
test++;
alea=alea2();
eni1=generer_alea_enigme1(eni1,alea);
}
else
{
f=6;
}
}
else if ((event.button.button==SDL_BUTTON_LEFT) && (event.motion.x>464) && (event.motion.x<865) && (event.motion.y>528) && (event.motion.y<692))
{
if ((eni1.tabRepGeneree[2][0]=='P') || (eni1.tabRepGeneree[2][0]=='Y') || (eni1.tabRepGeneree[2][0]=='R') || (eni1.tabRepGeneree[2][0]=='B'))
{
f=8;
test++;
alea=alea2();
eni1=generer_alea_enigme1(eni1,alea);
}
else
{
f=9;
}
}
}
}
q=TTF_RenderText_Blended(police,eni1.QuestionGeneree,blanc);
a=TTF_RenderText_Blended(police,eni1.tabRepGeneree[0],blanc);
b=TTF_RenderText_Blended(police,eni1.tabRepGeneree[1],blanc);
c=TTF_RenderText_Blended(police,eni1.tabRepGeneree[2],blanc);
SDL_BlitSurface(eni1.Box[f],NULL,screen,&eni1.posBox);
SDL_BlitSurface(q,NULL,screen,&posq);
SDL_BlitSurface(a,NULL,screen,&posa);
SDL_BlitSurface(b,NULL,screen,&posb);
SDL_BlitSurface(c,NULL,screen,&posc);
SDL_Flip(screen);
}
return 1;
}
