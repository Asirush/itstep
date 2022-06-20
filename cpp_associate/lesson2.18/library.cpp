#include "library.h"

library::library()
{
	guess_word_size = 0;
	std::ifstream myfile;
	myfile.open("word_list.txt");
	if (myfile.is_open()) {
		std::string myline;
		while (myfile) {
			std::getline(myfile, myline);
			word_in_library(myline);
		}
	}
}

library::library(size_t a)
{
	guess_word_size = a;
	std::ifstream myfile;
	myfile.open("word_list.txt");
	if (myfile.is_open()) {
		std::string myline;
		while (myfile) {
			std::getline(myfile, myline);
			if (myline.length() == a) {
				word_in_library(myline);
			}
			
		}
	}
}
