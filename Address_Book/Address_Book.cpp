#include<iostream>
#include<string>
#include"Address_Book.h"

void Address_Book::SetName(std::string Temp_Name) {
	Name=Temp_Name;
}

void Address_Book::SetAge(int Temp_Age) {
	Age = Temp_Age;
}

void Address_Book::SetSex(bool Temp_Sex) {
	Sex = Temp_Sex;
}

void Address_Book::SetPhone_Number(std::string Temp_Phone_Number) {
	Phone_Number = Temp_Phone_Number;
}

void Address_Book::SetAddress(std::string Temp_Addres) {
	Address = Temp_Addres;
}

void Address_Book::printName() {
	std::cout << Name;
}
void Address_Book::printAge() {
	std::cout << Age;
}
void Address_Book::printSex() {
	if(Sex)
		std::cout << "ÄÐ";
	else
		std::cout << "Å®";
}
void Address_Book::printPhone_Number() {
	std::cout << Phone_Number;
}
void Address_Book::printAddress() {
	std::cout << Address;
}

std::string Address_Book::ReturnName() {
	return Name;
}

std::string Address_Book::ReturnPhone_Number() {
	return Phone_Number;
}

std::string Address_Book::ReturnAddress() {
	return Address;
}