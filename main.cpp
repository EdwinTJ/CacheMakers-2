#include <SFML/Graphics.hpp>

#include <iostream>
#define WIDE 800
#define HIGH 600

int main()
{
  sf::RenderWindow window (sf::VideoMode(WIDE,HIGH),"Adventure");

  sf::CicleShape circle(100)
  circle.setFillColor(sf::Color::Yellow);
  circle.setPosition(100,100);

  sf::RectangleShape hero(100,100);
  hero.setFillColor(sf::Color::Green);
  hero.setPosition(300,400);

  int CircleDirection = 0;

  int heroSpeed = 1;

  int points = 10;

//Game Loop
  while(window.isOpen())
  {
    //Hnadles Events
    sf::Event event;
    whlie(window.pollEvent(event))

  }
   {
     window.close();
   }

   f::Keyboard::isKeyPressed(sf::Up) && hero.getPosition().y > 0)

   {
     ro.move(0,heroSpeed);
   }
   f::Keyboard::isKeyPressed(sf::Down) && hero.getPosition().y > HIGH-hero.getSize().y)

   {
     ro.move(0,heroSpeed);
   }
   if(sf::Keyboard::isKeyPressed(sf::Rigth) && hero.getPosition().x > WIDE-hero.getSize().x)

   {
     ro.move(0,heroSpeed);
   }
   if(sf::Keyboard::isKeyPressed(sf::Left) && hero.getPosition().x > 0)

    {
      heroro.move(0,heroSpeed);
    }

if(hero.getGlobalBounds().intersects(circle.getGlobalBounds()))
{
  std::cout <<"Touching!" << std::endl;
}
else
{
  std::cout << "Not Touching" << std::endl;
}
     window.clear(sf::Color::Blue);
  //uptade stuff - This is Aaron
  if(circle.Direction == 0)
  {
    circle.move(0.1,0)
  }
  if(circle.Direction == 1)
  {
    circle.move(-0.1,0)
  }

  if(circle.getposition().x > 600 )
{
  circle.Position = 1;
}

  if(circle.getposition().x < 0)
  {
    circle.Position = 0;
  }


  //render - This is Max
  window.draw(circle);
  window.display();

   }
}
