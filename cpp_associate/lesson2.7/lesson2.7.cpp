#include <iostream>

//mytype sum(mytype a, mytype b) { return a + b; }

//int sum(int first, int second) { return first + second; }
//float sum(float first, float second) { return first + second; }

template<typename T>
void show(T arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

template<typename mytype>
void max(const mytype arr[], size_t size) {
    mytype a = arr[0];
    for (size_t i = 0; i < size; i++) {
        if (a < arr[i]) a = arr[i];
    }
    std::cout << a << endl;
}

template<typename mytype>
void min(const mytype arr[], size_t size) {
	mytype a = arr[0];
	for (size_t i = 0; i < size; i++) {
		if (a > arr[i]) a = arr[i];
	}
	std::cout << a << endl;
}

template<typename mytype>
void sort(const mytype arr[], size_t size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[j] < arr[j++]) mytype a = arr[j]; arr[j] = arr[j++]; arr[j++] = a;
		}
	}
}

template<typename mytype>
int search(const mytype arr[], size_t size, mytype a) {
	bool stat;
	while (stat == 0) {
		for (int i = 0; i < size / 2; i++) {
			if (arr[i] == a) return i; stat = 1;
		}
		for (int i = size/2; i < size; i++) {
			if (arr[i] == a) return i; stat = 1;
		}
	}
}

template<typename mytype>
void max(const mytype arr[], size_t pos, mytype data) {
	arr[pos] = data;
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	// размеры массивов
	const int iSize = 10,
		dSize = 7,
		fSize = 10,
		cSize = 5;

	// массивы разных типов данных
	int    iArray[iSize] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double dArray[dSize] = { 1.2345, 2.234, 3.57, 4.67876, 5.346, 6.1545, 7.7682 };
	float  fArray[fSize] = { 1.34, 2.37, 3.23, 4.8, 5.879, 6.345, 73.434, 8.82, 9.33, 10.4 };
	char   cArray[cSize] = { "MARS" };

	std::cout << "\t\tPattern of function of an output of an array on the screen\n\n";

	// вызов локальной версии функции printArray для типа int через шаблон
	std::cout << "\n Array type int:\n"; show(iArray, iSize);

	// вызов локальной версии функции printArray для типа double через шаблон
	std::cout << "\n Array type double:\n"; show(dArray, dSize);

	// вызов локальной версии функции printArray для типа float через шаблон
	std::cout << "\n Array type float:\n"; show(fArray, fSize);

	// вызов локальной версии функции printArray для типа char через шаблон
	std::cout << "\n Array type char:\n"; show(cArray, cSize);

	return 0;
}