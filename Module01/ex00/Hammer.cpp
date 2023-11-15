#include "Hammer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Hammer::Hammer()
{
}

Hammer::Hammer( const Hammer & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Hammer::~Hammer()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Hammer &				Hammer::operator=( Hammer const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

void Hammer::use()
{
	numberOfUses++;
	std::cout << "Hammer used " << numberOfUses << " times" << std::endl;
}

std::ostream &			operator<<( std::ostream & o, Hammer const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */