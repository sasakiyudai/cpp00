#include <iostream>
#include <iomanip>
#include "contact.hpp"

std::string Contact::fields[11] = 
{
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

Contact::Contact()
{

}

Contact::~Contact()
{
	
}

int Contact::can_set_then_set(int id)
{
	this->id = id + 1;
	int sum_length = 0;
	for (int i = 0; i < 11; i++)
	{
		std::cout << fields[i] << ": ";
		std::getline(std::cin, data[i]);
		sum_length += data[i].length();
	}
	if (sum_length == 0)
	{
		std::cout << "==invalid input==" << std::endl;
		return (0);
	}
	return (1);
}

void Contact::show_list(void)
{
	std::cout << "|" << std::setw(10) << id << "|";
	for (int i = 0; i < 3; i++)
	{
		if (data[i].length() >= 10)
			std::cout << data[i].substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << data[i] << "|";
		if (i == 2)
			std::cout << std::endl;
	}
}

void Contact::show_data(void)
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << fields[i] << ": ";
		std::cout << data[i] << std::endl;
	}
}