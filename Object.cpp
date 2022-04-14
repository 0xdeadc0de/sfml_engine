#include "Object.hpp"

Object::Object() 
    : sprite() 
    , x(0), y(0), vspeed(0), hspeed(0)
{
}
void Object::ProcessSteps() {
    // Movement
    x += hspeed; 
    y += vspeed;
    
    // Draw
    sprite.X = x; 
    sprite.Y = y;
    sprite.ProcessDraw();
}
const sf::Drawable& Object::GetDrawable() {
    return sprite.Shape;
}
void Object::GoDown(float speed) {
    vspeed += speed;
}
void Object::GoUp(float speed) {
    vspeed -= speed;
}
void Object::GoRight(float speed) {
    hspeed += speed;
}
void Object::GoLeft(float speed) {
    hspeed -= speed;
}