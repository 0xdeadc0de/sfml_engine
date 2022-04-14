#include "Sprite.hpp"
class Object {
public:
    Object();
    
    void GoLeft();
    void GoRight();
    void GoDown();
    void GoUp();
    void Stop();
    
    void ProcessSteps();
    
    const sf::Drawable& GetDrawable();
    
    
private:
    Sprite sprite;
    float x, y, vspeed, hspeed, maxspeed;
};