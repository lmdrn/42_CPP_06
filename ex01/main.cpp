/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:44:10 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 11:07:22 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (void)
{
	Data myData;
	myData.iVal = 42;
	myData.fVal = 3.14f;
	myData.sVal = "Helloooooo youuuu";

	uintptr_t serializedData = Serializer::serialize(&myData);
	Data* deserializedData = Serializer::deserialize(serializedData);

	if (deserializedData == &myData)
	{
		std::cout << GREEN << "Test passed: The deserialized pointer matches the original pointer." << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "Test failed: The deserialized pointer does not match the original pointer." << RESET << std::endl;
	}

	std::cout << "iVal: " << deserializedData->iVal << std::endl;
	std::cout << "fValue: " << deserializedData->fVal << std::endl;
	std::cout << "sValue: " << deserializedData->sVal << std::endl;

	system("leaks serializer");
	return (0);
}
