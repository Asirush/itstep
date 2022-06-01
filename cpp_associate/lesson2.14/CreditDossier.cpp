#include "CreditDossier.h"
#include"BankLoan.h"
#include<string>
#include<vector>

CreditDossier::CreditDossier()
{

}

void CreditDossier::setPerson(Person name)
{
	this->_person = name;
}

void CreditDossier::setLoan(BankLoan loanname)
{
	_loans.push_back(loanname);
	_count++;
}

/*
for metods: getLoanByName, getLoanBySumm, getLoanByRepaymentAmount

Name: Ivanov I.I. --- Loans
----------------------------------------------------
Name			Summ		Amount
...			...		...
...			...		...
...			...		...
----------------------------------------------------
*/

void CreditDossier::getLoanByName()
{
	std::cout << "Name: " << _person._name() << std::endl << "----------------------------------------------------" << endl; cout << "Name			Summ		Amount"<<endl;
	for (size_t i = 0; i < _count; i++) {
		
	}
}
