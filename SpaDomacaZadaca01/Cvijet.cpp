#include "Cvijet.h"
#include <math.h>

Cvijet::Cvijet(sf::RenderWindow* window)
{
	Window = window;
	Clock = sf::Clock();
}

void Cvijet::draw()
{
	auto x = (int)(Clock.getElapsedTime().asSeconds()) % 10;
	sf::CircleShape sun(15 + x);
	sun.setFillColor(sf::Color(255, 255, 0));

	Window->draw(sun);

	sf::CircleShape outerFlower(50.f);
	outerFlower.setFillColor(sf::Color(255, 0, 0));
	outerFlower.setPosition(sf::Vector2f(100, 100));

	Window->draw(outerFlower);

	sf::CircleShape innerFlower(30.f);
	innerFlower.setFillColor(sf::Color(255, 255, 0));
	innerFlower.setPosition(sf::Vector2f(120, 120));

	Window->draw(innerFlower);

	sf::RectangleShape stem(sf::Vector2f(10, 100));
	stem.setFillColor(sf::Color(0, 255, 0));
	stem.setPosition(sf::Vector2f(145, 200));

	Window->draw(stem);

	sf::ConvexShape leaf(4);
	leaf.setFillColor(sf::Color(0, 255, 0));
	leaf.setPosition(sf::Vector2f(145, 230));
	leaf.setPoint(0, sf::Vector2f(0, 0));
	leaf.setPoint(1, sf::Vector2f(100, -40));
	leaf.setPoint(2, sf::Vector2f(200, -50));
	leaf.setPoint(3, sf::Vector2f(100, 10));

	Window->draw(leaf);
}
