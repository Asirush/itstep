#include <iostream>
#include <Windows.h>
using namespace std;


// Создадим двумерные массивы для карт игроков

char pfield[10][10];

char efield[10][10];

char ecopyfield[10][10];

char* pecopy = &ecopyfield[0][0];

char* pf = &pfield[0][0];

char* pe = &efield[0][0];

int fourlive[4] = { 1, 1, 1, 1 };
int fourcoor[4];

// Указатель на массив, который хранит координаты "x" 4-ного корабля

int* pfourcoor = fourcoor;

// Функция для заполнения массивов пробелами
void fillin(char* a) {
	for (int i = 0; i < 100; i++) {
		a[i] = '.';
	}
}
void show(char* a) {
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
			cout << a[i * 10 + j] << ' ';

		}
		cout << endl;
	}
	cout << endl;
}
// 4-ной корабль
void ship4(char* f) {
	//Получаем случайную ориентацию 4-ного корабля
	bool hororien = rand() % 2;
	//Получаем случайные координаты х и y для 4-ного корабля c учетом случаной ориентации
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 18 клеток успешно прошли проверку
	int fourfree = 1;
	int xfourcorrect = 1;
	// Если 4-ной корабль горизонтальный 
	if (hororien == true) {
		// Проверяем 18 свободных клеток для 4-ного горизонтального корабля
		do {
			fourfree = 1;

			// Проверка x на корректность 

			do {
				//Переменная для статуса корректного x
				xfourcorrect = 1;
				x = rand() % 100;// Случайный адрес от 0 до 99   87
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

			// Проверка на свободу 18 клеток

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
			// Если на вход подано поле врага
			if (f == pe) {
				pfourcoor[i - x] = i;

			}
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



		for (int i = x; i <= x + 30; i = i + 10) {
			f[i] = char(223);
		}
	}
}
// 3-ной корабль
void ship3(char* f) {
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

// 2-ной корабль
void ship2(char* f) {
	//Получаем случайную ориентацию 2-ного корабля
	bool hororien = rand() % 2;
	//Получаем случайную координату х для 2-ного корабля c учетом случайной ориентации
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 12 клеток успешно прошли проверку
	int twofree = 1;
	int xtwocorrect = 1;
	if (hororien == true) {
		// Проверяем 12 свободных клеток для 2-ного горизонтального корабля
		do {
			twofree = 1;

			// Проверка x на корректность 

			do {
				//Переменная для статуса корректного x
				xtwocorrect = 1;
				x = rand() % 100;// Случайный адрес от 0 до 99


				//Проверяем не выпали ли числа 9, 19, 29 ... 99
				for (int i = 9; i <= 99; i = i + 10) {
					if (x == i) {
						xtwocorrect = 0;
						break;
					}
				}
			} while (xtwocorrect == 0);

			for (int i = x - 11; i <= x - 8; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x - 1; i <= x + 2; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x + 9; i <= x + 12; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}



		} while (twofree == 0);
		for (int i = x; i < x + 2; i++) {
			f[i] = char(223);
		}
	}
	// Проверка 2-ного вертикального корабля
	else if (hororien == false) {
		do {
			twofree = 1;
			x = rand() % 80;// Случайный адрес от 0 до 89


			for (int i = x - 11; i <= x - 9; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x - 1; i <= x + 1; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x + 9; i <= x + 11; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x + 19; i <= x + 21; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}


		} while (twofree == 0);
		for (int i = x; i <= x + 10; i = i + 10) {
			f[i] = char(223);
		}
	}
}
// 1-ный корабль
void ship1(char* f) {

	//Получаем случайную координату х для 1-ного корабля
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 9 клеток успешно прошли проверку
	int onefree = 1;


	// Проверяем 12 свободных клеток для 2-ного горизонтального корабля
	do {
		onefree = 1;
		x = rand() % 100;// Координата для 1-ного корабля от 0 до 99
		for (int i = x - 11; i <= x - 9; i++) {
			if (f[i] == char(223)) {
				onefree = 0;
			}
		}
		for (int i = x - 1; i <= x + 1; i++) {
			if (f[i] == char(223)) {
				onefree = 0;
			}
		}
		for (int i = x + 9; i <= x + 11; i++) {
			if (f[i] == char(223)) {
				onefree = 0;
			}
		}



	} while (onefree == 0);
	// Ставим одиночный кораблик
	f[x] = char(223);



}
//Функция для ручного заполнения тройных корабликов

int main()
{
	srand(time(0));
	// Создадим переменные для счета игроков
	int scoreme = 0;
	int scoreenemy = 0;



	fillin(pf); //Заполняем массив карты игрока точками
	fillin(pe);//Заполняем массив карты компьютера точками
	fillin(pecopy); //Заполняем пробное поле точками

	// Рисуем кораблики для полей обоих игроков
	ship4(pf);
	ship3(pf);
	ship3(pf);
	ship4(pe);
	ship3(pe);
	ship3(pe);
	for (int i = 0; i < 3; i++) {
		ship2(pf);
		ship2(pe);
	}
	for (int i = 0; i < 4; i++) {
		ship1(pf);
		ship1(pe);
	}
	// Две переменные для хода игрока (выбранная строка и выбранный столбик)
	int str, stlb;


	// Выбираем кто будет ходить
	int randomturn = rand() % 2;

	// Основной игровой цикл

	while (true) {
		show(pf);
		show(pecopy);
		// Если выпало 0, мы ходим первые
		// Пока randomturn равен 0, ходит первый игрок
		while (randomturn == 0) {

			// Программа просит походить заново, если мы уже ходили на эту клетку
			do {
				cout << "Hod igroka #1" << endl;
				do {
					cout << "Vyberite stroku" << endl;
					cin >> str;
				} while (str < 0 || str > 9);
				do {
					cout << "Vyberite stolbik" << endl;
					cin >> stlb;
				} while (stlb < 0 || stlb > 9);
			} while (pecopy[str * 10 + stlb] == 'X' || pecopy[str * 10 + stlb] == 'o');



			// Проверяем что на этой клетке стоит: кораблик или там пусто
			if (pe[str * 10 + stlb] == char(223)) {
				cout << "Popali" << endl;
				pecopy[str * 10 + stlb] = 'X';
				scoreme += 1;
			}
			else {
				cout << "Mimo" << endl;
				pecopy[str * 10 + stlb] = 'o';
				// Если мы промахнулись, то ход передается игроку #2
				randomturn = 1;
			}
			Sleep(3000);
			system("cls");
			show(pf);
			show(pecopy);
		}
		// Пока randomturn равен 1, ходит компьютер
		while (randomturn == 1) {

			do {
				str = rand() % 10;
				stlb = rand() % 10;
			} while (pf[str * 10 + stlb] == 'X' || pf[str * 10 + stlb] == 'o');



			if (pf[str * 10 + stlb] == char(223)) {
				cout << "Vrag popal po coordinatam: " << str << ' ' << stlb << endl;
				pf[str * 10 + stlb] = 'X';
				scoreenemy += 1;
				Sleep(5000);
				break;
			}
			else {
				cout << "Vrag promahnulsya po coordinatam: " << str << ' ' << stlb << endl;
				pf[str * 10 + stlb] = 'o';
				randomturn = 0;
				Sleep(5000);
				break;
			}

			system("cls");
			show(pf);
			show(pecopy);
		}

		system("cls");

	}

	// Задача: у каждого корабля противника должен быть статус жизни (у 4-ного корабля 4 жизни, у 3-ного 3 жизни...)
	// Если мы ранили корабль, сообщение "Бито"
	// Если корабль потоплен, сообщение "Убит"
}