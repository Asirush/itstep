#pragma once
#include <iostream>

class word
{
	std::string english_word;
	std::string russian_word;
public:
	word();
	word(std::string eng);
	word(std::string a, std::string b);
	std::string get_en();
	std::string get_ru();
};

