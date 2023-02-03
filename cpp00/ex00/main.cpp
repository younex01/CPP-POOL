#include <stdio.h>
#include <iostream>
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

int main()
{
	Simple instance;
	std::cout << "hello" << std::endl;
	return 0;
}