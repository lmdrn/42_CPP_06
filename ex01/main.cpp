/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:44:10 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/19 21:44:53 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (void)
{
	// Create a Data object
	Data myData;
	myData.iVal = 42;
	myData.fVal = 3.14f;
	myData.sVal = "Helloooooo youuuu";

	// Serialize the pointer to the Data object
	uintptr_t serializedData = Serializer::serialize(&myData);

	// Deserialize the uintptr_t back to a pointer
	Data* deserializedData = Serializer::deserialize(serializedData);

	// Check that the original pointer and the deserialized pointer are the same
	if (deserializedData == &myData) {
	std::cout << "Test passed: The deserialized pointer matches the original pointer." << std::endl;
	} else {
	std::cout << "Test failed: The deserialized pointer does not match the original pointer." << std::endl;
	}

	// Optional: Print out the values to ensure data integrity
	std::cout << "iVal: " << deserializedData->iVal << std::endl;
	std::cout << "fValue: " << deserializedData->fVal << std::endl;
	std::cout << "sValue: " << deserializedData->sVal << std::endl;

	return (0);
}
