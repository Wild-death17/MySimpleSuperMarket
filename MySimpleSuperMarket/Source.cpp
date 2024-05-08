#include "SuperMarket.h"
#include <iostream>
using namespace std;
int main()
{

	Product p1("halav", 10);
	Product p2("lehem", 10);

	Customer c1(new Product[2]{ p1,p2 }, 2, new Payment);
	Customer c2(new Product[2]{ p1,p2 }, 2, new CashPayment);
	Customer c3(new Product[2]{ p1,p2 }, 2, new CreditPayment);

	ClubMember* cm1 = new ClubMember(new Product[2]{ p1,p2 }, 2, new Payment);
	ClubMember* cm2 = new ClubMember(new Product[2]{ p1,p2 }, 2, new CashPayment);
	ClubMember* cm3 = new ClubMember(new Product[2]{ p1,p2 }, 2, new CreditPayment);

	cout << "Customer" << endl;
	cout << c1.GetTotalPrice() << endl;
	cout << c2.GetTotalPrice() << endl;
	cout << c3.GetTotalPrice() << endl;

	cout << "\nClubMember" << endl;
	cout << cm1->GetTotalPrice() << endl;
	cout << cm2->GetTotalPrice() << endl;
	cout << cm3->GetTotalPrice() << endl;

	cout << "\nSuperMarket" << endl;
	Customer** customers = new Customer * [6] { &c1, & c2, & c3, cm1, cm2, cm3 };
	SuperMarket sm1(customers, 6);
	cout << sm1.GetTotalPayments() << endl;
	cout << sm1.GetAvgPerCustomer() << endl;

}