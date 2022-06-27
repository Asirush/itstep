#include<iostream>
#include "concert.h"
#include "user.h"
#include "song.h"

int main() {

	concert november("Nothing But Thieves Concert");
	user asirush("asirush");

	asirush.show_menu();

	november.finish_voiting();

	return 0;
}