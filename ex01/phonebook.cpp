#include <iostream>
#include <limits>
#include "phonebook.hpp"

int Phonebook::num_contacts = 0;

Phonebook::Phonebook()
{

}

Phonebook::~Phonebook()
{
	
}

void Phonebook::add(void)
{
	if (num_contacts == 8)
		std::cout << "==capacity lack==" << std::endl;
	else if (contacts[num_contacts].can_set_then_set(num_contacts))
		num_contacts++;
}

void Phonebook::search(void)
{
	int index;

	if (num_contacts)
	{
		std::cout << "|===========================================|" << std::endl;
		std::cout << "|     index|first name| last name|  nickname|" << std::endl;
		std::cout << "|===========================================|" << std::endl;
		for (int i = 0; i < num_contacts; i++)
			contacts[i].show_list();
		std::cout << "|===========================================|" << std::endl;
		std::cout << ">> ";
		while (!(std::cin >> index) || (index <= 0) || (index > num_contacts))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "==invalid input==\n>> ";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		contacts[index - 1].show_data();
	}
	else
		std::cout << "==no data==" << std::endl;
}
