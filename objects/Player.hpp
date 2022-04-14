#include "../Object.hpp"
class Player : public Object {
public:
    void ProcessInput(sf::Keyboard::Key, bool);
};