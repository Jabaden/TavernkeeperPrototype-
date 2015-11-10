#include "DrinkSelector.h"
#include "GameVariables.h"

DrinkSelector::DrinkSelector(){
	position = 0;

	Drink* testDrink = new Drink(1920 - 600, 1080 - 200);
	Drink* testDrink2 = new Drink(1920 - 500, 1080 - 200);
	Drink* testDrink3 = new Drink(1920 - 400, 1080 - 200);
	Drink* testDrink4 = new Drink(1920 - 300, 1080 - 200);
	Drink* testDrink5 = new Drink(1920 - 200, 1080 - 200);

	drinkVector = new dVec();
	drinkVector->push_back(testDrink);
	drinkVector->push_back(testDrink2);
	drinkVector->push_back(testDrink3);
	drinkVector->push_back(testDrink4);
	drinkVector->push_back(testDrink5);
	

}

void DrinkSelector::render(sf::RenderWindow* wnd){
	for (auto iter = this->drinkVector->begin(); iter != this->drinkVector->end(); iter++){
		(*iter)->render(wnd);
	}
}

void DrinkSelector::incrementDrink(){
	this->position++;
	if (this->position > 4){
		this->position = 0;
	}
}

void DrinkSelector::decrementDrink(){
	this->position--;
	if (this->position < 0){
		this->position = 4;
	}
	cout << to_string(this->position) << " fuck this" << endl;
}

void DrinkSelector::raiseDrink(){
	Drink tempDrink = *(this->drinkVector->at(this->position));
	tempDrink.setYPos(tempDrink.getYpos() - 100);
}

