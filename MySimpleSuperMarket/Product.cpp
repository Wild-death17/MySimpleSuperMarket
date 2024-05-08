#include "Product.h"

Product::Product(string name, double price) {
	setName(name);
	setPrice(price);
}
void Product::setName(string name) {
	this->name = name;
}
void Product::setPrice(double price) {
	this->price = price;
}
