#include "Particle.h"
#include "random.h"

Particle::Particle(){
    Random r;
    for(int i=0; i < 40; i++){

        int x = r.Next(0,1400);
       int  y = r.Next(0,800);
        shape = (sf::CircleShape(r.Next(10,30)));
        shape.setPosition(x,y);
        vel= (sf::Vector2f(r.Next(-5,5), r.Next(-5,5)));

        int r_ = r.Next(0,255);
        int g_ = r.Next(0,255);
        int b_ = r.Next(0,255);
        shape.setFillColor(sf::Color(r_,g_,b_));

    }
}

void Particle::Step(int command){
     shape.move(vel);
        sf::Vector2f pos = shape.getPosition();
        if ((pos.x)>=WORK_PANEL-20)
            vel = sf::Vector2f(-1*vel.x,1*vel.y);
        if (pos.x<=0)
            vel = sf::Vector2f(-1*vel.x,1*vel.y);
        if ((pos.y)>=SCREEN_HEIGHT-20)
            vel = sf::Vector2f(1*vel.x,-1*vel.y);
        if (pos.y<=0)
            vel = sf::Vector2f(1*vel.x,-1*vel.y);
}

void Particle::Draw(sf::RenderWindow& window){
    window.draw(shape);
}