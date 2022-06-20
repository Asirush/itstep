#include "word_in_library.h"

word_in_library::word_in_library()
{
	word_counter = 0;
	word = "";
}

word_in_library::word_in_library(std::string a)
{
	auto SIZE = a.length();
	bool breaker = false;
	char local_counter[10];
	for (int i = 0; i < SIZE; i++) {
		if (a[i]++) {
			if (breaker == false && a[i++]!=char(47)) {
				local_counter[i] = a[i];
			}
			else if (a[i] == char(47) && a[i]++ == char(116)) {
				breaker++;
			}
			else {
				word[i] = a[i];
			}
		}
	}
	word_counter = int(&local_counter);
}
