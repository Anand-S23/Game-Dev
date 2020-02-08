#include "common.h"
#include "SDL_image.h"

extern void cleanup(void);
extern void initSDL(void);
extern void prepareScene(void);
extern void presentScene(void);
extern void doInput(void);
extern void blit(SDL_Texture* texture, int x, int y);
extern SDL_Texture* loadTexture(char* file);

App app;
Entity player;
