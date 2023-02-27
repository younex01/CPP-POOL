#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	(void)other;
	return *this;
}

void ScalarConverter::convert(std::string str)
{
    if (DetectType::is_char(str))
        PrintMsg::ForChar(str);
    else if (DetectType::is_int(str))
        PrintMsg::ForInt(str);
    else if (DetectType::is_float(str))
        PrintMsg::ForFloat(str);
    else if (DetectType::is_double(str))
        PrintMsg::ForDouble(str);
	else if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
	}
	else if (str == "-inf" || str == "+inf" || str == "nan")
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str + "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
    else
        throw  "WRONG TYPE" ;
}