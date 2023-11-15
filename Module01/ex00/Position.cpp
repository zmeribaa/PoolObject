#include "Position.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Position::Position()
{
}

Position::Position( const Position & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Position::~Position()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Position &				Position::operator=( Position const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Position const & i )
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