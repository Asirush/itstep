#include <iostream>
#include "my_string.h"
#include <cstring>

my_string f(my_string str) {
    return str;
}

int main()
{
    my_string str("test");
    my_string str2(str);

    my_string test = f(str);


    return 0;
}