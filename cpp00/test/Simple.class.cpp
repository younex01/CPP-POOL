#include "Simple.clase.hpp"
#include <iostream>


Simple::Simple(void)
{
	std::cout << "constractor are made" << std::endl;
	return;
}

Simple::~Simple(void)
{
	std::cout << "destractor are made" << std::endl;
	return;
}