#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

//gcc src/main.c -o bin/main -I include -L lib -lmingw32 -lSDL2main -lSDL2

int main(int argc, char **argv) //important : cette structure main doit etre respectee pour tout les programmes incluant la sdl
{
    SDL_version nb;
    SDL_VERSION(&nb);

    printf("%d.%d.%d\n", nb.major, nb.minor, nb.patch);
    return 0;
}