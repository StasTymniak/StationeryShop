#include "Shop.h"
#include <iostream>
using namespace std;

Shop::Shop(string name, string location, int rating, int discount,bool goods)
{
	this->name = name;
	this->location = location;
	this->rating = rating;
	this->discount = discount;
	this->goods = goods;
}

void Shop::Write()
{
	cout << "Shop info: \n" << "Name: "<<name << "\nLocation: " << location << "\nRating: " << rating << "\nDiscount: " << discount << "%" << endl;
}

int Shop::GetRating()
{
	return rating;
}

string Shop::ShopInfo()
{
	string info = name + " " + location + " " + to_string(rating) + " " + to_string(discount) + " " + to_string(goods);
	return info;
}

bool Shop::GetGoodsInfo() {
	return goods;
}


int Shop::GetDiscount()
{
	return discount;
}