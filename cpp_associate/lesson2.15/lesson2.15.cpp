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
	
	my_home.push_back(new cat("Tomas", "white", 5, "usual cat"));
	my_home.push_back(new dog("Sam", "black", 0.5, "German Shepard"));
	my_home.push_back(new humster("Jemmie", "red", 0.3, "Desert humster"));
	my_home.push_back(new parrot("Sammie", "bege", 5, "usual cat"));

	return 0;
}