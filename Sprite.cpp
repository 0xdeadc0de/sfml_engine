#include "Sprite.hpp"
Sprite::Sprite() {
    ProcessDraw();
}
void Sprite::ProcessDraw() {
    Shape.setFillColor(sf::Color::Cyan);
    Shape.setRadius(1e1);
    Shape.setPosition(X, Y);
}