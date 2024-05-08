#pragma once
#include "Customer.h"
#include "ClubMember.h"
class SuperMarket
{
private:
	Customer** listOfCustomers;
	int numOfCustomers;
public:
	SuperMarket(Customer**, int);
	~SuperMarket();
	double GetTotalPayments();
	double GetAvgPerCustomer();
};

