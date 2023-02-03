#include <iostream>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2 )
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z') 
				std::cout << (av[1][i] - 38);
			else
				std::cout << av[1][i];
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
