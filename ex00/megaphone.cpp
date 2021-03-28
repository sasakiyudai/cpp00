#include <iostream>

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 1;
		while (i < argc)
		{
			int j = 0;
			while (argv[i][j])
				std::cout << (char)std::toupper(argv[i][j++]);
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}