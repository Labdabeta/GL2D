#include "gl2d.h"
#include <stdio.h>
#include <SDL.h>

static SDL_Window *_window;

int gl2d_init(int width, int height, const char *title)
{
    if (SDL_Init(SDL_INIT_VIDEO))
        return printf("SDL initialization failure: %s\n",SDL_GetError());
    if (!(_window = SDL_CreateWindow(
                    title,
                    SDL_WINDOWPOS_UNDEFINED,
                    SDL_WINDOWPOS_UNDEFINED,
                    width,height,
                    SDL_WINDOW_SHOWN)))
        return printf("SDL window creation failure: %s\n",SDL_GetError());
    return 0;
} 

void gl2d_quit(void) 
{
    SDL_DestroyWindow(_window);
    SDL_Quit();
}
    
void gl2d_sleep(int ms)
{
    SDL_Delay(ms);
}
