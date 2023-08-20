#ifndef PARTICLE_H
#define PARTICLE_H
#include <vector>
#include <SFML/Graphics.hpp>
#include "constants.h"

using namespace std;
class Particle
{
public:
    Particle();
    void Step(int command);
    int Size();
    void Draw(sf::RenderWindow& widnow);
    
private:
    sf::CircleShape shape;
    sf::Vector2f vel;
    

};

#endif