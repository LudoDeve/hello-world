#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    int statut = EXIT_FAILURE;
    SDL_Rect rectA;
    SDL_Rect rectB;
    SDL_Rect rectC;
    SDL_Point ptA;
    SDL_bool inter_rect_rect;
    SDL_bool inter_rect_pt;
    SDL_Color bleu = {0, 0, 255, 255};
    SDL_Color orange = {255, 127, 40, 255};


Quit:
    if(NULL != renderer)
        SDL_DestroyRenderer(renderer);
    if(NULL != window)
        SDL_DestroyWindow(window);
    SDL_Quit();
    return statut;
}
