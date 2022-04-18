#include <iostream>
#include "book.h"

/*class MyClass
{
public:
	MyClass();
	MyClass(int i);
	//explicit MyClass(int i);    //запрет, на неявный вызов метода
	MyClass(double i);
	~MyClass();

private:
	int test;
};

int main()
{

	// variables format is the same class
	int test(0);
	MyClass test_2 = 0;
	//if you wish to use create object ONLY this way add "explicit MyClass(int i);"
	MyClass test_3(0);
}

MyClass::MyClass()
{
	test = 0;
}

MyClass::MyClass(int i)
{
	test = i;
}

MyClass::MyClass(double i)
{
	test = (int)i;
}

MyClass::~MyClass()
{
	delete[] test;
}
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	book test("������ ��������", "Grokking Algorithms: An illustrated guide for programmers and other curious people", "�����", 2017, 370);

	book test2 = test; 
	/*also possible:
	book test2(test)*/

	/*const int size = 3;
	book mas[size];*/
	//mas[0].init("������ ��������", "Grokking Algorithms: An illustrated guide for programmers and other curious people", "�����", 2017, 370);
	//mas[1].init("����� ������", "����������� �����������: ���������� �� ������ ���", "�����", 2015, 272);
	//mas[2].init("��� �������", "21st Century C", "��� �����", 2015, 376);

	//std::cout << "������ ���� ���'a:\n";
	//for (int i = 0; i < size; i++) {
	//	mas[i].show_by_author("���");
	//}

	//std::cout << "������ ���� ������������ �����:\n";
	//for (int i = 0; i < size; i++) {
	//	mas[i].show_by_publishing_house("�����");
	//}

	//std::cout << "������ ���� ����� 2000:\n";
	//for (int i = 0; i < size; i++) {
	//	mas[i].show_by_year(2000);
	//}

	return 0;
}
