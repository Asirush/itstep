#include "dictionary_full.h"
#include "word.h"

dictionary_full::dictionary_full()
{
    std::string s; // сюда будем класть считанные строки
    std::ifstream file("dict.txt"); // файл из которого читаем (для линукс путь будет выглядеть по другому)

    while (getline(file, s)) { // пока не достигнут конец файла класть очередную строку в переменную (s)
        std::string str(s);
        auto len = str.find_first_of('\t');
        std::string en = str.substr(0, len);
        std::string ru = str.substr(len);
        word mem(en, ru);
        _library.push_back(mem);

    }
    file.close(); // обязательно закрываем файл что бы не повредить его
}

dictionary_full::dictionary_full(word a)
{
    _library.push_back(a);
}

size_t dictionary_full::size()
{
    return _library.size();
}

std::string dictionary_full::get_translation(std::string a)
{
	size_t SIZE = _library.size();
    std::cout << _library.size();
	for (auto i = 0; i < SIZE; i++) {
		if (_library[i].get_en() == a) return _library[i].get_ru();
	}
}