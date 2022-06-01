#include "BankLoan.h"

BankLoan::BankLoan()
{
	_loanName = "";
	_loanSize = 0;
	_months = 0;
	_percents = 0;
}

BankLoan::BankLoan(std::string name, double size, size_t months, size_t percents)
{
	_loanName = name;
	_loanSize = size;
	_months = months;
	_percents = percents;
}

void BankLoan::getLoanRepaymentSchedule(BankLoan obj)
{
	std::cout << "Name: "<< obj.
}
