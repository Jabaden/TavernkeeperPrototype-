#include "Drink.h"
#include <iostream>
Drink::Drink(int xPos, int yPos){
	//std::cout << "test";
	drinkSprite = new sf::Sprite();
	drinkTexture = new sf::Texture();
	drinkTexture->loadFromFile("ScaryFace-2.png");
	drinkSprite->setTexture(*(drinkTexture));
	drinkSprite->setPosition(xPos, yPos);
	drinkSprite->setScale(.5f, .5f);

	xPosition = xPos;
	yPosition = yPos;

}

void Drink::render(sf::RenderWindow* wnd){
	wnd->draw(*(this->drinkSprite));
}

sf::Sprite* Drink::getSprite(){
	return this->drinkSprite;
}

void Drink::setXPos(int x){
	this->xPosition = x;
}

void Drink::setYPos(int y){
	this->yPosition = y;
}

int Drink::getXPos(){
	return this->xPosition;
}

int Drink::getYpos(){
	return this->yPosition;
}