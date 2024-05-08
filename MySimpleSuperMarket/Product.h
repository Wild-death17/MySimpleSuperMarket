#pragma once
#include <string>
using namespace std;
class Product
{
private:
	string name;
	double price;
public:
	Product(string, double);
	Product() { setPrice(0); }
	~Product() {}
	void setName(string);
	void setPrice(double);
	double getPrice() { return this->price; }
};

