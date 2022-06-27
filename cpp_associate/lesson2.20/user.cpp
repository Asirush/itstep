#include "user.h"
#include <iostream>

user::user(std::string a)
{
	_username = a;
}

void user::show_menu()
{
	system("cls");
	std::cout << "Hello, welcome to a concert!" << std::endl << "Please, select songs you would like to listen to or add your own:" << std::endl;
	std::cout << "1. Itch" << std::endl << "2. Excuse Me" << std::endl << "3. If I Get High" << std::endl << "4. Ban All the Music" << std::endl;
	std::cout << "5. Add My Own Song" << std::endl << "Your choise: "; size_t a; std::cin >> a;

	song first("Itch"); song second("Excuse Me"); song third("If I Get High"); song fourth("Ban All the Music");

	switch (a) {
		case 1:
			first++;
			continue_or_exit();
		case 2:
			second++;
			continue_or_exit();
		case 3:
			third.add_counter();
			continue_or_exit();
		case 4:
			fourth.add_counter();
			continue_or_exit();
		case 5:
			add_new_song();
			continue_or_exit();
	}
	

}

void user::add_new_song()
{
	std::system("cls");
	std::cout << "To add a anew song enter its name: ";
	std::string a; std::cin >> a; song(a);
}

void user::continue_or_exit()
{
	system("cls");
	std::cout << "Press 'x' to exit and 'y' to return back to menu: "; char a; std::cin >> a;
	if (a == char(121)) { show_menu(); }
}
