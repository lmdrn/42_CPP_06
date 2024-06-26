/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:31:53 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 10:52:22 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

size_t	ScalarConverter::strchr(const std::string& str, char c)
{
	size_t len = str.size();
	for (size_t i = 0; i < len; i++)
	{
		if (str[i] == c)
			return (i);
	}
	return (std::string::npos);
}

char	ScalarConverter::findLastChar(const std::string& str)
{
	return (str[str.size() - 1]);
}

bool	ScalarConverter::isException(const std::string value)
{
	if (value == "-inff" || value == "+inff" || value == "nanf"
			|| value == "-inf" || value == "+inf" || value == "nan")
		return (true);
	else
		return (false);
}

void	ScalarConverter::convert(const std::string& value)
{
	if (value.length() == 1 && std::isprint(value[0]) && !std::isdigit(value[0]))
		convertChar(value);
	else if (isException(value) == true)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (value == "-inff" || value == "+inff" || value == "nanf")
		{
			std::cout << "float: " << value + "f" << std::endl;
			std::cout << "double: " << value.substr(0, value.size() - 1) << std::endl;
		}
		else
		{
			std::cout << "float: " << value + "f" << std::endl;
			std::cout << "double: " << value << std::endl;
		}
	}
	else if (ScalarConverter::strchr(value, '.') != std::string::npos && ScalarConverter::findLastChar(value) == 'f')
		convertFloat(value);
	else if (ScalarConverter::strchr(value, '.') != std::string::npos)
		convertDouble(value);
	else
		convertInt(value);
}

void	ScalarConverter::convertChar(const std::string& value)
{
	char c = value[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) <<  ".0" << std::endl;
}

void	ScalarConverter::convertInt(const std::string& value)
{
	try
	{
		int nbr = std::stoi(value);
		if (nbr < 32 || nbr > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
		}
		std::cout << "int: " << nbr << std::endl;
		std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(nbr) <<  ".0" << std::endl;
	}
	catch (const std::invalid_argument& error)
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	catch (const std::out_of_range& error)
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void ScalarConverter::convertFloat(const std::string& value)
{
	try
	{
		float decimal = std::stof(value);
		if (isException(value) == true)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else if (decimal < 32 || decimal > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(decimal) << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(decimal) << std::endl;
		}
		std::cout << "float: " << decimal << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(decimal) << ".0" << std::endl;
	}
	catch (const std::invalid_argument& error)
	{
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	catch (const std::out_of_range& error)
	{
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void ScalarConverter::convertDouble(const std::string& value)
{
	try
	{
		double dbl = std::stod(value);
		if (std::isnan(dbl) || std::isinf(dbl))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else if (dbl < 32 || dbl > 126)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "char: '" << static_cast<char>(dbl) << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(dbl) << std::endl;
		}
		std::cout << "float: " << static_cast<float>(dbl) << "f" << std::endl;
		std::cout << "double: " << dbl << std::endl;
	}
	catch (const std::invalid_argument& error)
	{
		std::cout << "double: impossible" << std::endl;
	}
	catch (const std::out_of_range& error)
	{
		std::cout << "double: impossible" << std::endl;
	}
}


