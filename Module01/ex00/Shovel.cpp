#include "Shovel.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Shovel::Shovel() : numberOfUses(0)
{
}

Shovel::Shovel( const Shovel & src )
{
	if (this != &src)
	{
		numberOfUses = src.numberOfUses;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Shovel::~Shovel()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Shovel &				Shovel::operator=( Shovel const & rhs )
{
	if (this != &rhs)
	{
		numberOfUses = rhs.numberOfUses;
	}
	return *this;
}

void Shovel::use()
{
	numberOfUses++;
	std::cout << "Shovel used " << numberOfUses << " times" << std::endl;
}

std::ostream &			operator<<( std::ostream & o, Shovel const & i )
{
	o << "Shovel used " << i.numberOfUses << " times";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */