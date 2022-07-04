#pragma once
#include <list>
#include <array>

class ASet
{
    int start, end;

public:
    ASet(int a, int b);
    ASet(int b);      // a по умолчанию 0
    ~ASet();
    void incl(int number);  // включить число в множество
                     // если такое число уже есть, то ничего не делать
    void excl(int number);  // исключить
    bool contain(int number); // содержится в множестве?
    void print(); // распечатать состояние объекта
};