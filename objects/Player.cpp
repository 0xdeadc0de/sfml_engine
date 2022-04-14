#include "Player.hpp"
void Player::ProcessInput(sf::Keyboard::Key key, bool pressed)
{
    auto speed = pressed ? 4.f : -4.f;
    
         if (key == sf::Keyboard::W) GoUp(speed); 
    else if (key == sf::Keyboard::A) GoLeft(speed);  
    else if (key == sf::Keyboard::S) GoDown(speed);
    else if (key == sf::Keyboard::D) GoRight(speed); 
}