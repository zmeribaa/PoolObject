#include "Worker.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Worker::Worker()
{

}

Worker::Worker( const Worker & src )
{
	coordonnee = src.coordonnee;
	stat = src.stat;
	tools = src.tools;
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
		tools = rhs.tools;
	}
	return *this;
}

void Worker::addTool(Tool *tool)
{
	tools.push_back(tool);
}

void Worker::useTool(Tool *tool)
{
	tool->use();
}

void Worker::registerToWorkshop(Workshop *workshop)
{
	workshop->registerWorker(this);
	workshops.push_back(workshop);
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
}

void Worker::work()
{
	for (std::vector<Tool *>::iterator it = tools.begin(); it != tools.end(); it++)
	{
		useTool(*it);
	}
}

void Worker::removeTool(Tool *tool)
{
	tools.erase(std::remove(tools.begin(), tools.end(), tool), tools.end());
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