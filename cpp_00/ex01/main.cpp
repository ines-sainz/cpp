/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:39:53 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/03 14:39:56 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phone_book.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phone_book;
	std::string	input;

	phone_book.patata = 42;
	std::cout << "patata = " << phone_book.patata << std::endl;

	while (1)
	{
		std::cout << "Enter line: ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "\nEmpty" << input <<std::endl;
			break ;
		}
		std::cout << "Entered: " << input <<std::endl;
		if (phone_book.check_input(input) == 1)
			return (1);
	}
	phone_book.patating();
	return (0);
}
