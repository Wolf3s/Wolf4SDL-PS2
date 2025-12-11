#include <SDL.h>
#include "wl_def.h"
#include "id_vl.h"

#if SDL_MAJOR_VERSION == 2

void Present(SDL_Surface *screen)
{
#ifdef PS2
    SDL_UpdateTexture(texture, NULL, screen->pixels, screenWidth * sizeof (Uint16));
#else
    SDL_UpdateTexture(texture, NULL, screen->pixels, screenWidth * sizeof (Uint32));
#endif
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
}
#endif
