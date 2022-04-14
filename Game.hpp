#include <SFML/Graphics.hpp>
#include "objects/Player.hpp"
class Game
{
public:
    Game();
    void Run();
private:
    void processEvents();
    void update();
    void render();
private:
    sf::RenderWindow window;
    Player player;
};
