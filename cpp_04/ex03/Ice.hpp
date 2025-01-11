
#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        std::string type;

    public:
        Ice& operator=( const Ice& before);
        Ice( const Ice& before );
        Ice( void );
        ~Ice();
};
