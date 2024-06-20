/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:44:10 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/20 17:59:02 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main (void)
{
	Base* p = Base::generate();
	Base::identify(p);  // identify using pointer
	Base::identify(*p); // identify using reference
	
	delete p;
	return (0);
}
