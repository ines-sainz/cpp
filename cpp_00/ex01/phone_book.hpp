/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:03 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/02 18:55:06 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include <string.h>
# include <ctype.h>

class PhoneBook
{
	private:
		char	*first_name;
		char	*last_name;
		char	*nickname;
		int		phone_number;
		char	*dark_secret;

	public:

		int patata;
	
		PhoneBook(void);
		~PhoneBook(void);

		void	patating(void);
};

#endif
