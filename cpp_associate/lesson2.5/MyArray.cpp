#include "MyArray.h"

ostream& operator<<(ostream& os, const MyArray obj)
{
    for (auto i = 0; i < obj.size; i++) {
        os << obj.masiv[i] << " ";
    }
    return os;
}
