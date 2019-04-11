prog:main.o background.o
	gcc main.o background.o -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -lm -o prog
main.o:main.c
	gcc main.c -c -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer
gggggg.o:background.c
	gcc background.c -c -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer
