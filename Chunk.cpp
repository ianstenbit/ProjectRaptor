#include "Chunk.h"
#include <stdio.h>

Chunk::Chunk(int initX, int initY, int r, int c, SDL_Renderer* renderer) : x(initX), y(initY), rows(r), columns(c),mainRenderer(renderer) {
    for(int i=0;i<rows*columns;i++)
        tiles.push_back(new Tile("grass_border.png",mainRenderer,(i%columns)*64,(i/columns)*64));
    width = 64*columns;
    height = 64*rows;
}

void Chunk::drawTiles() {
    //printf("rows:%d cols:%d",rows,columns);
    for(int i=0;i<rows*columns;i++)
        tiles[i]->draw();
}

void Chunk::panTiles(int dx, int dy) {
   for(int i=0;i<rows*columns;i++)
       tiles[i]->move(dx, dy);
}
