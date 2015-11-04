#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
class Drink{
private:
	sf::Sprite* drinkSprite;
	sf::Texture* drinkTexture;
	string name;
	string type;
	string flavor;
public:
	Drink();
	void render(sf::RenderWindow* wnd);
	sf::Sprite* getSprite();
};