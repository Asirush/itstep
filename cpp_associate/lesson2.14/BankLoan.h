#pragma once
#include<iostream>
class BankLoan
{
private:
	std::string _loanName;
	double _loanSize;
	size_t _months;
	size_t _percents;
public:
	BankLoan();
	BankLoan(std::string name, double size, size_t months, size_t percents);
	void getLoanRepaymentSchedule(BankLoan obj);
};

