#include "word.h"

word::word()
{
	english_word = "";
	russian_word = "";
}

word::word(std::string eng)
{
	english_word = eng;
}

word::word(std::string a, std::string b)
{
	english_word = a;
	russian_word = b;
}

std::string word::get_en()
{
	return english_word;
}

std::string word::get_ru()
{
	return russian_word;
}
