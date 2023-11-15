#include "Worker.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Worker::Worker()
{
	std::cout << "Worker created" << std::endl;
}

Worker::Worker( const Worker & src )
{
	coordonnee = src.coordonnee;
	stat = src.stat;
	tools = src.tools;
	workshops = src.workshops;
	std::cout << "Worker created by copy" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Worker::~Worker()
{
	std::cout << "Worker destroyed" << std::endl;
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
		tools = rhs.tools;
	}
	std::cout << "Worker assigned" << std::endl;
	return *this;
}

void Worker::addTool(Tool *tool)
{
	tools.push_back(tool);
	std::cout << "Worker added tool" << std::endl;
}

void Worker::useTool(Tool *tool)
{
	tool->use();
	std::cout << "Worker used tool" << std::endl;
}

void Worker::registerToWorkshop(Workshop *workshop)
{
	workshop->registerWorker(this);
	workshops.push_back(workshop);
	std::cout << "Worker registered to workshop" << std::endl;
}

void Worker::releaseFromWorkshop(Workshop *workshop)
{
	workshop->releaseWorker(this);
	std::vector<Workshop *>::iterator it = workshops.begin();
	while (it != workshops.end())
	{
		if (*it == workshop)
		{
			workshops.erase(it);
			return;
		}
		it++;
	}
	std::cout << "Worker released from workshop" << std::endl;
}

void Worker::work()
{
	for (std::vector<Tool *>::iterator it = tools.begin(); it != tools.end(); it++)
	{
		useTool(*it);
	}
	std::cout << "Worker finished working" << std::endl;
}

void Worker::removeTool(Tool *tool)
{
	tools.erase(std::remove(tools.begin(), tools.end(), tool), tools.end());
	std::cout << "Worker removed tool" << std::endl;
}

std::ostream &			operator<<( std::ostream & o, Worker const & i )
{
	std::cout << "Worker ostream called" << std::endl;	
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */