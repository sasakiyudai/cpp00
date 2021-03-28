#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	Phonebook phonebook;
	int exit_flag = false;
	std::string input;

	while (exit_flag == false)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
			exit_flag = true;
		else if (input.compare("ADD") == 0)
			phonebook.add();
		else if (input.compare("SEARCH") == 0)
			phonebook.search();
	}
	return (EXIT_SUCCESS);
}