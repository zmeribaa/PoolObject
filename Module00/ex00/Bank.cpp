#include "Bank.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bank::Bank() : liquidity(0)
{
}

Bank::Bank( const Bank & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bank::~Bank()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bank &				Bank::operator=( Bank const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bank const & i )
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