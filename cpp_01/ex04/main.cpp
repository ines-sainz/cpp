/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:25:47 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/12 18:25:49 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{
	std::ifstream	toRead;
	std::ofstream	toWrite;

	if (argc == 4)
	{
		
		toRead.open(argv[1], std::ios::in);
		if (!toRead.is_open())
		{
			std::cout << "Can't read file" << std::endl;
			return (1);
		}
		std::cout << "ok";
	}
	std::cout << "nop";
	return (0);
}
