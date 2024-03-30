#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
private:
	sf::RenderWindow* Window;
	sf::Clock frameClock;
public:
	Cvijet(sf::RenderWindow* window);

	void draw();
};

