#include <SFML/Graphics.hpp>
#include "Drink.h"
#include "DrinkDeck.h"
#include <iostream>
#include <ostream>
#include <fstream>
#include <time.h>
using namespace std;
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
	Drink* testDrink = new Drink();
	string testArray[2];
	testArray[0] = "test1";
	testArray[1] = "test2";

	DrinkCard testCard("ayy", "lmao", testArray);
	sf::Clock testClock;
	DrinkDeck test;
	

	//FILE I/O 

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (testClock.getElapsedTime().asSeconds() > 2){
			testClock.restart();
			testCard.pickRandomAttribute();
		}
		window.clear(sf::Color::White);
		testDrink->render(&window);
		window.display();
	}

	return 0;
}