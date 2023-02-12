#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include "Simple.clase.hpp"
/*
int g_a = 1;
int f(void){return 2;}

namespace NM
{
	int g_a = 3;
	int f(void){return 4;}
}

namespace F = NM;


int main()
{
	printf("ga = %d\n f = %d\n", g_a,f());
	printf("NM::ga = %d\n NM::f = %d", F::g_a, F::f());
	return 0;
}
*/
/*
int main()
{
	char buffer[512];
	std::cout << "first print in cpp" << std::endl;
	std::cin >> buffer;
	std::cout << buffer;
}
*/

// int main()
// {
// 	// Simple instance;
// 	// std::cout << "hello" << std::endl;
// 	// return 0;
// 	float a = 545154541521;
// 	float b = a/0;
// 	std::cout << b;
// 	// while (a == b)
// 	// 	a++;
// }

// int main()
// {
// 	int nb;
// 	std::string i;
// 	std::cout << "Enter the index of the contact you want to display :";
// 	if(!std::getline(std::cin, i))
// 		exit (1);
// 	std::cout << std::endl;
// 	nb = strtol(string_to_convert.c_str(), &i, 10);
// 	// std::istringstream(i) >> nb;
// 	std::cout << nb;
// }

#include <iostream>
#include <string>

void byPtr(std::string* str)
{
	*str += " and ponies";
}

void byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void byRef(std::string& str)
{
	str += " and ponies";
}

void byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::string str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}