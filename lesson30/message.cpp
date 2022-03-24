
#include <iostream>
#include <Windows.h>
using namespace std;


// Создадим двумерные массивы для карт игроков

char pfield[10][10];

char efield[10][10];

char* pf = &pfield[0][0];

char* pe = &efield[0][0];

// Две переменные для запоминания первой клетки 4-ного корабля
int x4, y4;
// Переменная для запоминания ориентации 4-ного корабля
char or4;


// Функция для заполнения массивов пробелами
void fillin(char *a) {
	for (int i = 0; i < 100; i++) {
		a[i] = '.';
	}
}
void show(char *a) {
	// Отображаем разметку столбиков буквами
	cout << "  ";
	// Вывод индексов столбиков от 0 до 9
	for (int i = 0; i < 10; i++) {
		cout << i << ' ';
	}
	cout << endl;

	
	for (int i = 0; i < 10; i++) {
		cout << i << ' ';
		for (int j = 0; j < 10; j++) {
			cout << a[i*10+j] << ' ';

		}
		cout << endl;
	}
	cout << endl;
}
//Функция для четвертного корабля (горизонтального и вертикального)
void ship4(char *f) {
	//Получаем случайную ориентацию 4-ного корабля
	bool hororien = rand()%2;
	//Получаем случайные координаты х и y для 4-ного корабля c учетом случаной ориентации
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 18 клеток успешно прошли проверку
	int fourfree = 1;
	int xfourcorrect = 1;
	if (hororien == true) {
		// Проверяем 18 свободных клеток для 4-ного горизонтального корабля
		do {
			fourfree = 1;
			
			// Проверка x на корректность 
			
			do {
				//Переменная для статуса корректного x
				xfourcorrect = 1;
				x = rand() % 100;// Случайный адрес от 0 до 99
				//Проверяем не выпали ли числа 7, 17, 27 ... 97
				for (int i = 7; i <= 97; i = i + 10) {
					if (x == i) {
						xfourcorrect = 0;
						break;
					}
				}
				//Проверяем не выпали ли числа 8, 18, 28 ... 98
				for (int i = 8; i <= 98; i = i + 10) {
					if (x == i) {
						xfourcorrect = 0;
						break;
					}
				}
				//Проверяем не выпали ли числа 9, 19, 29 ... 99
				for (int i = 9; i <= 99; i = i + 10) {
					if (x == i) {
						xfourcorrect = 0;
						break;
					}
				}
			} while (xfourcorrect == 0);
			


			for (int i = x - 11; i <= x - 6; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x - 1; i <= x + 4; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 9; i <= x + 14; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}



		} while (fourfree == 0);
		for (int i = x; i < x + 4; i++) {
			f[i] = char(223);
		}
	}
	else if (hororien == false) {
		do {
			fourfree = 1;
			x = rand() % 70;// Случайный адрес от 0 до 69
			for (int i = x - 11; i <= x - 9; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x - 1; i <= x + 1; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 9; i <= x + 11; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 19; i <= x + 21; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 29; i <= x + 31; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 39; i <= x + 41; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}

		} while (fourfree == 0);
		for (int i = x; i <= x + 30; i=i+10) {
			f[i] = char(223);
		}
	}
}
void ship3(char *f) {
	//Получаем случайную ориентацию 3-ного корабля
	bool hororien = rand() % 2;
	//Получаем случайную координату х  для 3-ного корабля c учетом случайной ориентации
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 15 клеток успешно прошли проверку
	int threefree = 1;
	int xthreecorrect = 1;
	if (hororien == true) {
		// Проверяем 15 свободных клеток для 3-ного горизонтального корабля
		do {
			threefree = 1;

			// Проверка x на корректность 

			do {
				//Переменная для статуса корректного x
				xthreecorrect = 1;
				x = rand() % 100;// Случайный адрес от 0 до 99
				
				//Проверяем не выпали ли числа 8, 18, 28 ... 98
				for (int i = 8; i <= 98; i = i + 10) {
					if (x == i) {
						xthreecorrect = 0;
						break;
					}
				}
				//Проверяем не выпали ли числа 9, 19, 29 ... 99
				for (int i = 9; i <= 99; i = i + 10) {
					if (x == i) {
						xthreecorrect = 0;
						break;
					}
				}
			} while (xthreecorrect == 0);



			for (int i = x - 11; i <= x - 7; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x - 1; i <= x + 3; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x + 9; i <= x + 13; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}



		} while (threefree == 0);
		for (int i = x; i < x + 3; i++) {
			f[i] = char(223);
		}
	}
	// Проверка 3-ного вертикального корабля
	else if (hororien == false) {
		do {
			threefree = 1;
			x = rand() % 80;// Случайный адрес от 0 до 79


			for (int i = x - 11; i <= x - 9; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x - 1; i <= x + 1; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x + 9; i <= x + 11; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x + 19; i <= x + 21; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x + 29; i <= x + 31; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
		

		} while (threefree == 0);
		for (int i = x; i <= x + 20; i = i + 10) {
			f[i] = char(223);
		}
	}
}
//Функция для ручного заполнения тройных корабликов

int main()
{
	srand(time(0));
	
	fillin(pf); //Заполняем массив карты игрока пробелами
	fillin(pe);//Заполняем массив карты компьютера пробелами
	while (true) {
		ship4(pf);
		ship3(pf);
		ship3(pf);
		ship4(pe);
		ship3(pe);
		ship3(pe);
		show(pf);
		show(pe);
		Sleep(2000);
		fillin(pf);
		fillin(pe);
		system("cls");
	}
	
	

	

	
	
	
}

