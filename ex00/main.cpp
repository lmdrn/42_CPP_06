/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:21:17 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 10:53:35 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr <<  RED << "Usage: " << av[0] << " <litteral>" << RESET << std::endl;
		return (1);
	}
	std::string input = av[1];
	ScalarConverter::convert(input);

	return (0);
}
