#include <iostream>

template<typename mytype>
//mytype sum(mytype a, mytype b) { return a + b; }

//int sum(int first, int second) { return first + second; }
//float sum(float first, float second) { return first + second; }

void show(mytype arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " "<<std::endl;
    }
}

int main()
{
    /*int a = 3, b = 5, c;
    c = sum(a, b);*/


}
