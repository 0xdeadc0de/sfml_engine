#include "Sprite.hpp"
class Object {
public:
    Object();
    
    void GoLeft(float);
    void GoRight(float);
    void GoDown(float);
    void GoUp(float);
    
    void ProcessInput(sf::Keyboard::Key, bool);
    void ProcessSteps();
    
    const sf::Drawable& GetDrawable();
    
    
private:
    Sprite sprite;
    float x, y, vspeed, hspeed;
};