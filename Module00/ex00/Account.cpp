#include "Account.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Account::Account() : id(-1), value(0)
{
}

Account::Account( const Account & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Account::~Account()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Account &				Account::operator=( Account const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Account const & i )
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