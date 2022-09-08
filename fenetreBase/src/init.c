#include <SDL.h>

#include "defs.h"
#include "init.h"

void initWindow()
{
    SDL_Window   *window   = NULL;
    SDL_Renderer *renderer = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("Erreur initialisation du module video : %s\n", SDL_GetError());
        exit(1);
    }

    window = SDL_CreateWindow("Fenetre Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);

    if(window == NULL)
    {
        SDL_Log("Erreur creation de la fenetre : %s\n", SDL_GetError());
        exit(1);
    }

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if(renderer == NULL)
    {
        SDL_Log("Erreur initialisation du module de rendu : %s\n", SDL_GetError());
        exit(1);
    }

    //SDL_Delay(1000);

    //SDL_Quit();
}