#include "phone_book.hpp"

int	Contact:: check_phone(const char *number)
{
	if (strlen(number) != 9)
		return(1);
	this->phone_number = atol(number);
	return (0);
}

void Contact:: print_col(std::string str)
{

}

void Contact:: print_contact(void)
{
	
	for (size_t i = 0; i < 10; i++)
	{
		/* code */
	}
	
	
	std::cout << "Contact Constructor" <<std::endl;
}

int	Contact:: add_contact(int n_contact)
{
	std::string	input[5];
	std::string	types[5];

	types[0] = "First_name";
	types[1] = "Last_name";
	types[2] = "Nickname";
	types[3] = "Phone_number";
	types[4] = "Dark_secret";
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << types[i] << ": ";
		std::getline(std::cin, input[i]);
		if (input[i].empty())
		{
			std::cout << "Empty contact info" <<std::endl;
			return (1);
		}
		if (i == 3)
		{
			if (check_phone(input[3].c_str()) == 1)
			{
				std::cout << "Wrong phone number" <<std::endl;
				return (1);
			}
		}
	}
	this->first_name = input[0];
	this->last_name = input[1];
	this->nickname = input[2];
	this->dark_secret = input[4];
	return (0);
}

void	Contact:: set_info(std::string first_name, std::string last_name, std::string nickname, long phone_number, std::string dark_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->dark_secret = dark_secret;
}

Contact::Contact(void)
{
	std::cout << "Contact Constructor" <<std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor" <<std::endl;
}
