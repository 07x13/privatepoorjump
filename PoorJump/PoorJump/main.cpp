#include <SFML/Graphics.hpp>
#include <iostream>


using namespace sf;
using namespace std;

int main()
{
	

	
	
	Texture level01;
	level01.loadFromFile("poormap.png");

	Sprite level1;
	level1.setTexture(level01);
	level1.setPosition(0, 0);

	Texture playertexture;
	playertexture.loadFromFile("person.png");

	Sprite player(playertexture);
	player.setPosition(100, 100);

	Texture level02;
	level02.loadFromFile("1.png");

    Sprite level2;
	level2.setTexture(level02);
	level2.setPosition(1000, 1000);

	Texture emmytex;
	emmytex.loadFromFile("emmy.png");

	Sprite emmy(emmytex);
	emmy.setPosition(1000, 1000);

    


	

	sf::RenderWindow window(sf::VideoMode(800, 800), "PoorJump");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (Keyboard::isKeyPressed(Keyboard::Left))
		{
			player.move(-0.3, 0);
			player.setRotation(-1);

		}
		if (Keyboard::isKeyPressed(Keyboard::Right))
		{
			player.move(0.3, 0);
			player.setRotation(2);
		
			
		}
		if (Keyboard::isKeyPressed(Keyboard::Up))
		{
			player.move(0, -0.3);
		}
		if (Keyboard::isKeyPressed(Keyboard::Down))
		{
			player.move(0, 0.3);
		}
		if (Keyboard::isKeyPressed(Keyboard::H))
		{
			level1.setPosition(1000, 1000);
			level2.setPosition(0,0);
			emmy.setPosition(520, 450);
		}

		window.clear();
		window.draw(level1);
		window.draw(level2);
		window.draw(emmy);
		window.draw(player);
		window.display();
	}

	return 0;
} 