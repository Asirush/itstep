#pragma once
#include<vector>
#include<iostream>
#include"BankLoan.h"
#include"Person.h"

class CreditDossier
{
	Person _person;
	std::vector<BankLoan> _loans;
	int _count = 0;
public:
	CreditDossier();
	void setPerson(Person name);
	void setLoan(BankLoan loanname);
	void getLoanByName();
	void getLoanBySumm();
	void getLoanByRepaymentAmount();
	void getRepaymentSchedule();
};

