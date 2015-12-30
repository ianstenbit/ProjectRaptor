#include "Projectile.h"

using namespace std;

Projectile::Projectile(string fileName, SDL_Renderer* r, double initX, double initY, double dx, double dy) : GameObject(fileName, r, initX, initY) { 
    xVel = dx;
    yVel = dy;
}

void Projectile::update(){
    boundingBox.x = (int)(boundingBox.x + xVel);
    boundingBox.y = (int)(boundingBox.y + yVel);
}
