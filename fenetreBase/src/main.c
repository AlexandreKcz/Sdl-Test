#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include "init.h"
#include "input.h"

int main(int argc, char **argv)
{
    SDL_version nb;
    SDL_VERSION(&nb);
    printf("%d.%d.%d\n", nb.major, nb.minor, nb.patch);

    initWindow();
    
    while(1)
    {
        doInput();

        SDL_Delay(16);
    }

    return EXIT_SUCCESS;
}