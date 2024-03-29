#ifndef _TILE_DRAWER_H_
#define _TILE_DRAWER_H_
#include <vector>
#include "Chunk.h"

using namespace std;

class TileDrawer {
    public:
        TileDrawer(int r, int c, SDL_Renderer*);
        void drawTiles();
        void panTiles(int, int);
    private:
        vector<Chunk*> chunks;
        int numChunks;
        int rows,columns;
        SDL_Renderer* mainRenderer;
        Chunk* currentChunk;
        void loadChunks();
};
#endif
