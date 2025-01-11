#pragma once
#include "AMateria.hpp"

class ICharacter
{
    private:
        std::string name;

    public:
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;

        ICharacter& operator=( const ICharacter& before );
        ICharacter( const ICharacter& before);
        ICharacter( void );
        virtual ~ICharacter() {}
};