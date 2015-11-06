#include "DrinkCard.h"

DrinkCard::DrinkCard(string aName, string aType, string flavor[]){
	this->name = aName;
	this->type = aType;
	this->chosenAttributeVector = new DrinkCard::bVector();
	this->chosenAttributeVector->push_back(false);
	this->chosenAttributeVector->push_back(false);
	this->chosenAttributeVector->push_back(false);
	for (int i = 0; i < 2; i++){
		flavorArray[i] = flavor[i];
		//std::cout << flavorArray[i];
	}
	//TODO NEW VECTOR AND INSERT DEFAULT BOOLEAN VALUES
}

void DrinkCard::drinkCardTest(){
	//std::cout << "HELLO THIS IS MICHELLE" << std::endl;
}

void DrinkCard::printCard(){
	cout << "Name: " << this->name << ". Type: " << this->type << ". Flavors: " << this->flavorArray[0] << ", " << this->flavorArray[1] << endl;
	cout << "inside printCard()" << endl;
}

void DrinkCard::pickRandomAttribute(){
	int random = rand() % 3;
	cout << to_string(random);
	this->chooseAttribute(random);
	//TODO
}

void DrinkCard::chooseAttribute(int attribute){
	switch (attribute){
	case(0) :
		this->chosenAttributeVector->at(0) = true;
		this->chosenAttributeVector->at(1) = false;
		this->chosenAttributeVector->at(2) = false;
		break;
	case(1) :
		this->chosenAttributeVector->at(0) = false;
		this->chosenAttributeVector->at(1) = true;
		this->chosenAttributeVector->at(2) = false;
		break;
	case(2):
		this->chosenAttributeVector->at(0) = false;
		this->chosenAttributeVector->at(1) = false;
		this->chosenAttributeVector->at(2) = true;
		break;
	}
}