/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:29:13 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/02 18:29:15 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor" <<std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor" <<std::endl;
	return;
}

void	PhoneBook::patating(void)
{
	std::cout << "Patating" <<std::endl;
	return ;
}

int	main(int argc, char **argv)
{
	//PhoneBook phone_book;
	PhoneBook	instance;

	instance.patata = 42;
	std::cout << "patata = " << instance.patata << std::endl;

	instance.patating();
	return (0);
}
