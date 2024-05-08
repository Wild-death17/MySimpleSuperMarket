#pragma once
#include "Customer.h"
class ClubMember :
    public Customer
{
public:
    ClubMember(Product*, int, Payment*);
    ClubMember() {}
    ~ClubMember();
    double GetTotalPrice();
};

