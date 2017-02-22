#include <SFML/Graphics.hpp>

#define WIDE 800
#define HIGH 600

int main()
{
  sf::RenderWindow window (sf::VideoMode(WIDE,HIGH),"Adventure");

  sf::CicleShape circle(100)
  cieclre.setFillColor(sf::Color::Yellow);
  circle.setPosition(100,100);

  int circleDirection = 0;

//Game Loop
  while(window.isOpen())
  {
    //Hnadles Events
    sf::Event event;
    whlie(window.pollEvent(event))
  }
   //Close Event
    if(event.type == sf::Event::Closed)

   {
     window.close();
   }
   {
     window.clear(sf::Color::Blue);
  //uptade stuff - This is Aaron
  if(circleDirection == 0)
  {
    circle.move(0.1,0)
    if(circle.getposition().x > 600 )

  }

else
{
  circle.move(-0.1,0)
}
{
  if(circle.getposition().x < 0)
}

  //render - This is Max
  window.drw(circle);
  window.display();

   }
}
