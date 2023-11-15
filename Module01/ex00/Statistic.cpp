#include "Statistic.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Statistic::Statistic()
{
}

Statistic::Statistic( const Statistic & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Statistic::~Statistic()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Statistic &				Statistic::operator=( Statistic const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Statistic const & i )
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