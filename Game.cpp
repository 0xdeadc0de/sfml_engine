#include "Game.hpp"
Game::Game() 
    : window(sf::VideoMode(3e2, 3e2), "como hacer")
    , player()
{
    window.setFramerateLimit(60);
}
void Game::Run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}
void Game::processEvents() {
    sf::Event event;
    
    while (window.pollEvent(event)) {
        
        auto e = event.type;
        
        if (e == sf::Event::Closed) 
            window.close(); 
            
        else if (e == sf::Event::KeyPressed)
            player.ProcessInput(event.key.code, true);
            
        else if (e == sf::Event::KeyReleased)
            player.ProcessInput(event.key.code, false);
    }
}
void Game::update() {
    player.ProcessSteps();
}
void Game::render() {
    window.clear();
    window.draw(player.GetDrawable());
    window.display();
}