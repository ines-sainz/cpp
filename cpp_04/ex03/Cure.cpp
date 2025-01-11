
#include "Cure.hpp"

Cure& Cure::operator=( const Cure& before )
{
    std::cout << "Copy Cure Assigment operator called" << std::endl;
    this->type = before.type;
    return (*this);
}

Cure::Cure( const Cure& before)
{
    std::cout << "Copy Cure constructor called" << std::endl;
    *this = before;
}

Cure::Cure( void )
{
    std::cout << "Default Cure Consructor called" << std::endl;
    this->type = "cure";
}

Cure::~Cure()
{
    std::cout << "Default Destructor called" << std::endl;
}
