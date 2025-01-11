#include "ICharacter.hpp"

std::string const & ICharacter::getName() const
{
    return (this->name);
}

ICharacter& ICharacter::operator=( const ICharacter& before)
{
    std::cout << "Copy ICharacter Assignment Operator called" << std::endl;
    this->name = before.name;
    return (*this);
}

ICharacter::ICharacter( const ICharacter& before)
{
    std::cout << "Copy ICharacter Constructor called" << std::endl;
    *this = before;
}

ICharacter::ICharacter( void )
{
    this->name = "";
    std::cout << "Default ICharacter Constructor called" << std::endl;
}
