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
	int xPosition;
	int yPosition;
public:
	Drink(int xPos, int yPos);
	void render(sf::RenderWindow* wnd);
	sf::Sprite* getSprite();
	int getXPos();
	int getYpos();
	void setXPos(int x);
	void setYPos(int y);
};