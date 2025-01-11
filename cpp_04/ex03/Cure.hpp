
#pragma once
#include "AMateria.hpp"

class Cure
{
    private:
        std::string type;

    public:
        Cure& operator=( const Cure& before);
        Cure( const Cure& before );
        Cure( void );
        ~Cure();
};
