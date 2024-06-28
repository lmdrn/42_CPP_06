/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:32:12 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 10:52:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class ScalarConverter
{
	private:
	    	// Private members
		ScalarConverter();
		//ScalarConverter(ScalarConverter const &copy);
		//ScalarConverter &operator=(ScalarConverter const &copy);
		virtual ~ScalarConverter();

		static void	convertInt(const std::string& value);
		static void	convertFloat(const std::string& value);
		static void	convertDouble(const std::string& value);
		static void	convertChar(const std::string& value);
	public:
		static void	convert(const std::string& value);
		static size_t	strchr(const std::string& str, char c);
		static char	findLastChar(const std::string& str);
		static bool	isException(const std::string value);
};

#endif /* SCALARCONVERTER_HPP */
