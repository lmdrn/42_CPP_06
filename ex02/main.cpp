/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:44:10 by lmedrano          #+#    #+#             */
/*   Updated: 2024/06/28 11:37:11 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	srand((time(NULL)));
	
	int	random = rand() % 3;
	
	switch(random)
	{
		case 0 : return (new A());
		case 1 : return (new B());
		case 2 : return (new C());
	}
	return (NULL);
}

// no need to use try and catch because with pointer, dynamic cast returns null if error
void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
	}
	else
	{
		std::cout << "I dunno what this is" << std::endl;
	}
}

//using try and catch because with reference throws std::bad_cast error
void	identify(Base& p)
{
	try
	{
		//void the dynamic cast because if not right, is caught by the catch anyways
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::bad_cast&)
	{
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::bad_cast&)
	{
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::bad_cast&)
	{
	}
	std::cout << "I do not know what this is..." << std::endl;
}

int main (void)
{
	Base* p = generate();
	identify(*p);	// identify using pointer
	identify(p); 	// identify using reference
	
	delete p;
	return (0);
}
