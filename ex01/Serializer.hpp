/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:24:52 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 11:06:01 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

struct Data
{
	int		iVal;
	float		fVal;
	std::string	sVal;
};

class Serializer
{
	private:
    		// Constructor
    		Serializer();
    		// Copy Constructor
    		Serializer(const Serializer& copy);
    		// Overloaded Operator Constructor
    		Serializer& operator=(const Serializer& copy);
    		// Destructor
    		~Serializer();
	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif /* SERIALIZER_HPP */
