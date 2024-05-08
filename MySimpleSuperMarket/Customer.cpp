#include "Customer.h"

Customer::Customer(Product* listOfProducts, int numOfProducts, Payment* pay) {

	this->numOfProducts = numOfProducts;

	this->listOfProducts = new Product[numOfProducts];
	for (int i = 0; i < numOfProducts; i++)
		memcpy(&this->listOfProducts[i], &listOfProducts[i], sizeof(Product));

	this->pay = pay;

}
Customer::~Customer() {
	//if (this->listOfProducts != NULL)
	//	delete[] this->listOfProducts;
}
double Customer::GetTotalPrice() {
	double sum = 0;
	for (int i = 0; i < numOfProducts; i++)
		sum += this->listOfProducts[i].getPrice();
	return sum - (sum * (this->pay->GetFactor() / 100));
}