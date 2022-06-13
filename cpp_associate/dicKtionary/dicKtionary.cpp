#include <iostream>
#include "dictionary_full.h"
#include "word.h"

using namespace std;

int main() {

	string word;
	cout << "Enter your word: "; //cin >> word;
	word = "Hello";
	dictionary_full dictionary;
	cout << dictionary.size();
	dictionary.get_translation(word);

	return 0;
}