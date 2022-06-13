#include "records.h"

records::records()
{
	this->_records;
}

records::records(record rec)
{
	this->_records.push_back(rec);
}

void records::add_record(record rec)
{
	this->_records.push_back(rec);
}

void records::show()
{
	system("cls");
	std::cout << "|   number   |    name    |    count   |   price/single   |   price/all   |" << std::endl;

}
