#include <SFML/Graphics.hpp>
#include "DrinkDeck.h"
#include "DrinkSelector.h"
#include <iostream>
#include <ostream>
#include <fstream>
#include <time.h>
#include "GameVariables.h"
using namespace std;
int main()
{
	std::srand(unsigned(std::time(0)));
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	string testArray[2];
	testArray[0] = "test1";
	testArray[1] = "test2";
	DrinkCard testCard("ayy", "lmao", testArray);
	sf::Clock testClock;
	DrinkDeck* test = new DrinkDeck();
	test->shuffleDeck();
	test->drawCard();

	//Drink* testDrink9 = new Drink(100,100);
	//int hello = testDrink9->getYpos();

	DrinkSelector* drinkSelectorTest = new DrinkSelector();
	drinkSelectorTest->raiseDrink();
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
			//testCard.pickRandomAttribute();
		}
		window.clear(sf::Color::White);
		//testDrink->render(&window);
		//testDrink9->render(&window);
		drinkSelectorTest->render(&window);
		window.display();
	}

	return 0;
}