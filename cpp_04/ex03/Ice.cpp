
#include "Ice.hpp"

Ice& Ice::operator=( const Ice& before)
{
    std::cout << "Copy AMateria assigment operator called" << std::endl;
    this->type = before.type;
    return (*this);
}

Ice::Ice( const Ice& before )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = before;
}

Ice::Ice( void )
{
    this->type = "ice";
    std::cout << "Default Ice Constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Default Ice Destructor called" << std::endl;
}
