#include "DrinkCard.h"

DrinkCard::DrinkCard(string aName, string aType, string flavor[]){
	this->name = aName;
	this->type = aType;
	for (int i = 0; i < 2; i++){
		flavorArray[i] = flavor[i];
		std::cout << flavorArray[i];
	}
}