/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:24:52 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/08 18:28:36 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>

class Serializer
{
	private:
	    	// Private members

	public:
    		// Constructor
    		Serializer();

    		// Destructor
    		~Serializer();

    		// Copy Constructor
    		Serializer(const Serializer& copy);

    		// Copy Assignment Operator
    		Serializer& operator=(const Serializer& copy);
};

#endif /* SERIALIZER_HPP */
