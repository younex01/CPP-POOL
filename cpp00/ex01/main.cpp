#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

// void	ft_add(PhoneBook New)
// {
// 	std::cout << "first name:"
// }

int	main()
{
	std::string i;
	PhoneBook New;
	while(1)
	{
		std::cout	<< std::endl
					<< "(1)ADD (2)SEARCH (3)EXIT :";
		if(!std::getline(std::cin, i))
			exit (1);
		std::cout	<< std::endl;
		if(i == "1")
			New.Add();
		else if( i == "2")
			New.Search();
		else if( i == "3")
			exit (0);
		else if(!i.empty())
			std::cout	<< "option not found"
						<< std::endl;
		i.clear();
	}
	return 0;
}