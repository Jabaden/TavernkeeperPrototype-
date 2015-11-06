#include "Drink.h"
#include <iostream>
Drink::Drink(){
	//std::cout << "test";
	drinkSprite = new sf::Sprite();
	drinkTexture = new sf::Texture();
	drinkTexture->loadFromFile("ScaryFace-2.png");
	drinkSprite->setTexture(*(drinkTexture));
}

void Drink::render(sf::RenderWindow* wnd){
	wnd->draw(*(this->drinkSprite));
}

sf::Sprite* Drink::getSprite(){
	return this->drinkSprite;
}