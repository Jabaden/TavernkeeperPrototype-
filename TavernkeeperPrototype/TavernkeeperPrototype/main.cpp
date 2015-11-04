#include <SFML/Graphics.hpp>
#include "Drink.h"
#include "DrinkCard.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
	Drink* testDrink = new Drink();
	string testArray[2];
	testArray[0] = "test1";
	testArray[1] = "test2";
	std::cout << to_string(testArray->length()); //testArray->length;
	DrinkCard testCard("ayy", "lmao", testArray);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::White);
		testDrink->render(&window);
		window.display();
	}

	return 0;
}