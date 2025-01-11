#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;

    public:
        virtual void use(ICharacter& target);
        virtual AMateria* clone() const = 0;
        std::string const & getType() const; //Returns the materia type
        AMateria( std::string const & type );
        AMateria& operator=( const AMateria& before );
        AMateria( const AMateria& before );
        AMateria( void );
        virtual ~AMateria();
};
