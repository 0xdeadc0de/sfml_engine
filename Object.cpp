#include "Object.hpp"

Object::Object() 
    : sprite() 
    , x(0), y(0), vspeed(0), hspeed(0), maxspeed(4)
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
void Object::GoDown() {
    vspeed = maxspeed;
    hspeed = 0;    
}
void Object::GoUp() {
    vspeed = -maxspeed;
    hspeed = 0;    
}
void Object::GoRight() {
    vspeed = 0;
    hspeed = maxspeed;    
}
void Object::GoLeft() {
    vspeed = 0;
    hspeed = -maxspeed;    
}
void Object::Stop() {
    vspeed = hspeed = 0;
}