#include "ClubMember.h"
ClubMember::ClubMember(Product* listOfProducts, int numOfProducts, Payment* pay) :
	Customer(listOfProducts, numOfProducts, pay) {
}
ClubMember::~ClubMember() {
	Customer::~Customer();
}
double ClubMember::GetTotalPrice() {
	double total = Customer::GetTotalPrice();
	return total - (total * 0.25);
}