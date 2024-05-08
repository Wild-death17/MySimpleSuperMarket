#pragma once
#include "Product.h"
#include "Payment.h"
#include "CashPayment.h"
#include "CreditPayment.h"
class Customer
{
protected:
	Product* listOfProducts;
	int numOfProducts;
	Payment* pay;
public:
	Customer(Product*, int, Payment*);
	Customer() {}
	~Customer();
	virtual double GetTotalPrice();
};



