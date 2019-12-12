/*Isaac Angle
this class creates a company that has a name, average amount paid
per month and the amount paid per bill*/

#ifndef _COMPANY_H
#define _COMPANY_H

#include<iostream>
#include<string>

using std::string;

class Company {

private:

	string name;
	int amount, averagePaid;

public:

	Company(std::string name, int amount, int averagePaid);

	string getName();

	int getAmount();

	int getAveragePaid();
};


#endif

