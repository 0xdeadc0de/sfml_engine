#include <SFML/Graphics.hpp>
class Sprite {
public:
    Sprite();
    
    void ProcessDraw();
    
public:
    float X, Y;
    sf::CircleShape Shape;
};