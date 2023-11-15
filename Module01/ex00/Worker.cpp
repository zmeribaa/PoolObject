#include "Worker.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Worker::Worker()
{
	pelle = nullptr;
}

Worker::Worker( const Worker & src )
{
	coordonnee = src.coordonnee;
	stat = src.stat;
	pelle = src.pelle;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Worker::~Worker()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Worker &				Worker::operator=( Worker const & rhs )
{
	if ( this != &rhs )
	{
		coordonnee = rhs.coordonnee;
		stat = rhs.stat;
		pelle = rhs.pelle;
	}
	return *this;
}

void	Worker::assignShovel(Shovel *newShovel)
{
	pelle = newShovel;
}

void	Worker::removeShovel()
{
	pelle = nullptr;
}

void	Worker::useShovel()
{
	if (pelle){
		pelle->use();
	} else {
		std::cout << "No shovel assigned" << std::endl;
	}
}

// std::ostream &			operator<<( std::ostream & o, Worker const & i )
// {
// 	o << "Worker with " << (i.pelle ? "a shovel" : "no shovel");
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */