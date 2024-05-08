#pragma once
#include "Payment.h"
class CashPayment : public Payment
{
public:
	double GetFactor()
	{
		return 5;
	}
};
