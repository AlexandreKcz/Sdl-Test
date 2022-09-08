#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    SDL_Window *window;
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        "Test Fenetre",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_OPENGL
    );

    if(window == NULL){
        printf("Erreur : impossible de creer la fenetre %s\n", SDL_GetError());
        return 1;
    }

    SDL_Delay(3000);
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}