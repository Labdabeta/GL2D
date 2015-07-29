SDL_INCLUDE = -ID:\SDL2\i686-w64-mingw32\include\SDL2
SDL_LIBRARY = -LD:\SDL2\i686-w64-mingw32\lib
SDL_LINKAGE = -lmingw32 -lSDL2main -lSDL2
HIDE_CONSOLE = #-w -Wl,-subsystem,windows

OBJS = gl2d.c test.c

CC = gcc

all : $(OBJS)
	$(CC) $(OBJS) $(SDL_INCLUDE) $(SDL_LIBRARY) $(HIDE_CONSOLE) $(SDL_LINKAGE) -o test
