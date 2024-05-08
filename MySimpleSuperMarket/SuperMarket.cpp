#include "SuperMarket.h"
SuperMarket::SuperMarket(Customer** listOfCustomers, int numOfCustomers) {

	this->numOfCustomers = numOfCustomers;

	this->listOfCustomers = new Customer * [numOfCustomers];
	for (int i = 0; i < numOfCustomers; i++)
		memcpy(&this->listOfCustomers[i], &listOfCustomers[i], sizeof(Customer));

}
SuperMarket::~SuperMarket() {
	//for (int i = 0; i < numOfCustomers; ++i)
	//	delete listOfCustomers[i];
	//delete[] listOfCustomers;
}

double SuperMarket::GetTotalPayments() {
	double sum = 0;
	for (int i = 0; i < this->numOfCustomers; i++)
		sum += this->listOfCustomers[i]->GetTotalPrice();

	return sum;
}
double SuperMarket::GetAvgPerCustomer() {
	double sum = this->GetTotalPayments();
	return sum / this->numOfCustomers;
}