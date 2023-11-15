#include "Workshop.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Workshop::Workshop()
{
}

Workshop::Workshop( const Workshop & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Workshop::~Workshop()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Workshop &				Workshop::operator=( Workshop const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

void Workshop::registerWorker(Worker *worker)
{
	workers.push_back(worker);
}

void Workshop::releaseWorker(Worker *worker)
{
	std::vector<Worker *>::iterator it = workers.begin();
	while (it != workers.end())
	{
		if (*it == worker)
		{
			workers.erase(it);
			return;
		}
		it++;
	}
}

void Workshop::executeWorkDay()
{
	for (std::vector<Worker *>::iterator it = workers.begin(); it != workers.end(); it++)
	{
		(*it)->work();
	}
}

std::ostream &			operator<<( std::ostream & o, Workshop const & i )
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