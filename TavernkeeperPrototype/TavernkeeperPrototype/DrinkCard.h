#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

class DrinkCard{
private:
	string name;
	string type;
	string flavorArray[2]; 
public:
	DrinkCard(string aName, string type, string flavor[2]);
};