CFLAGS=-w -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
prog:main.o
	gcc main.o -o prog $(CFLAGS) -g
main.o:main.c
	gcc -c main.c -g $(CFLAGS)
clear:
	rm -rf *.o
