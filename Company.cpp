#include "Company.h"

Company::Company(std::string name, int amount, int averagePaid){

	this->amount = amount;
	this->name = name;
	this->averagePaid = averagePaid;

}
//returns the name of the company
string Company::getName(){

	return this->name;
}
//returns the amount of the bill
int Company::getAmount(){

	return this->amount;
}
//returns the average amount paid
int Company::getAveragePaid(){

	return this->averagePaid;
}
