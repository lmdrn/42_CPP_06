/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:32:12 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 10:19:38 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <iomanip>
#include <cmath>

class ScalarConverter
{
	private:
	    	// Private members
		ScalarConverter();
		static void	convertInt(const std::string& value);
		static void	convertFloat(const std::string& value);
		static void	convertDouble(const std::string& value);
		static void	convertChar(const std::string& value);
	public:
		static void	convert(const std::string& value);
		static size_t	strchr(const std::string& str, char c);
		static char	findLastChar(const std::string& str);
};

#endif /* SCALARCONVERTER_HPP */
