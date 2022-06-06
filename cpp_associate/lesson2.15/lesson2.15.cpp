#include <iostream>
#include <vector>
#include <list>
#include "house_animals.h"
#include "cat.h"
#include "dog.h"
#include "parrot.h"
#include "humster.h"


int main() {

	house_animals* animals;

	std::list<house_animals*> my_home;

	cat Tom("Tom");
	dog Sam("Sam", "black", 15, "German Shepard");
	parrot Jemmie("Jemmie", "red", 0.5, "Amazon parrot");
	humster Rikkie("Rikkie", "bege", 0.3, "Desert humster");
	
	my_home.push_back(Tom);
	my_home.push_back(Sam);
	my_home.push_back(Jemmie);
	my_home.push_back(Rikkie);

	return 0;
}