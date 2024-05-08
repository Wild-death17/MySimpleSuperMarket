#pragma once
#include "Payment.h"
class CreditPayment : public Payment
{
public:
	double GetFactor()
	{
		return -10;
	}
};
