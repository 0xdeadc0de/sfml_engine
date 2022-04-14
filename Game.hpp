#include <SFML/Graphics.hpp>
#include "Object.hpp"
class Game
{
public:
    Game();
    void Run();
private:
    void processEvents();
    void playerInput(sf::Keyboard::Key, bool);
    void update();
    void render();
private:
    sf::RenderWindow window;
    Object player;
};
