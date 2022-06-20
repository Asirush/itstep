#include <iostream>
#include "game.h"

int main() {
	std::string a;
	std::cout << "Hello, enter your word: "; std::cin >> a;
	game(a);
	return 0;
}