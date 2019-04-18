prog:main.o initennemi.o affichage.o 
	gcc affichage.o initennemi.o main.o  -o prog -g $(sdl-config --libs --cflags) -lSDL -lSDL_mixer -lSDL_image

initennemi.o:initennemi.c
	gcc -c initennemi.c $(sdl-config --libs --cflags) -lSDL -lSDL_mixer -lSDL_image 
main.o:main.c 
	gcc -c main.c  $(sdl-config --libs --cflags) -lSDL -lSDL_mixer -lSDL_image 


