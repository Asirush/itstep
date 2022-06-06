#pragma once

#include <iostream>
#include <string>
using namespace std;

class car
{
private:
	const float tradeMargin = 30;		// �������� ������� (� %)
	const float valueAddedTax = 12;		// ������ ���
	float price;						// ���� ��� ��������
	std::string release;				// ��� � ����� �������
protected:
	// ������������ ��������� ������
	const string SHOPING_ROOM = "Shopping room in Almaty";
	// ��������� ��������� ����
	float getFullPrice();
public:
	car();
	car(std::string release, float price);
	std::string getRelease();
	virtual void printToString();
	virtual void printCheck();
	virtual ~car();
};
