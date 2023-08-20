#include "system.h"
#include "random.h"

#include <iostream>

#include "constants.h"
System::System()
{
    // Random r;
    // for(int i=0; i < 40; i++){

    //     int x = r.Next(0,1400);
    //    int  y = r.Next(0,800);
    //     shape.push_back(sf::CircleShape(r.Next(10,30)));
    //     shape[i].setPosition(x,y);
    //     vel.push_back(sf::Vector2f(r.Next(-5,5), r.Next(-5,5)));

    //     int r_ = r.Next(0,255);
    //     int g_ = r.Next(0,255);
    //     int b_ = r.Next(0,255);
    //     shape[i].setFillColor(sf::Color(r_,g_,b_));

    // }

    for(int i=0; i < 40; i++){  
          system.push_back(Particle());
      }

    
    
}


//------------------------------------------------------------------
//------------------------------------------------------------------

void System::Step(int command){

      for(int i=0; i < 40; i++){  
          system[i].Step(command);
      }

    //     //all this is the responsibility of the
    //     // individual object:
    //     shape[i].move(vel[i]);
    //     sf::Vector2f pos = shape[i].getPosition();
    //     if ((pos.x)>=WORK_PANEL-20)
    //         vel[i] = sf::Vector2f(-1*vel[i].x,1*vel[i].y);
    //     if (pos.x<=0)
    //         vel[i] = sf::Vector2f(-1*vel[i].x,1*vel[i].y);
    //     if ((pos.y)>=SCREEN_HEIGHT-20)
    //         vel[i] = sf::Vector2f(1*vel[i].x,-1*vel[i].y);
    //     if (pos.y<=0)
    //         vel[i] = sf::Vector2f(1*vel[i].x,-1*vel[i].y);
    //   }



        

           
}


void System::Draw(sf::RenderWindow& window){
    for(int i=0; i < 40; i++){ 
    system[i].Draw(window);
    

    }

}
