#include "Tool.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Tool::Tool() : numberOfUses(0)
{
}

Tool::Tool( const Tool & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Tool::~Tool()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Tool &				Tool::operator=( Tool const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Tool const & i )
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