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

int	PhoneBook:: check_input(std::string input)
{

	if (input == "ADD")
	{
		if (person[n_contact % 8].add_contact(n_contact) == 1)
			return (1);
		this->n_contact++;
	}
	else if (input == "SEARCH")
	{
		person[n_contact % 8]
	}
	return (0);
}

PhoneBook::PhoneBook(void)
{
	this->n_contact = 0;
	std::cout << "PhoneBook Constructor" <<std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor" <<std::endl;
}

void	PhoneBook::patating(void)
{
	std::cout << "Patating" <<std::endl;
}
