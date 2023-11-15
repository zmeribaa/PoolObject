#ifndef WORKER_HPP
# define WORKER_HPP

# include <iostream>
# include <string>
# include "Position.hpp"
# include "Statistic.hpp"
# include "Tool.hpp"
# include "Workshop.hpp"
# include <vector>
# include <algorithm>

class Workshop;
class Worker
{
	Position coordonnee;
	Statistic stat;
	std::vector<Tool *> tools;
	std::vector<Workshop *> workshops;

	public:

		Worker();
		Worker( Worker const & src );
		~Worker();

		Worker &		operator=( Worker const & rhs );
		void addTool(Tool *tool);
		void useTool(Tool *tool);
		void removeTool(Tool *tool);
		void registerToWorkshop(Workshop *workshop);
		void releaseFromWorkshop(Workshop *workshop);
		void work();

	private:

};

std::ostream &			operator<<( std::ostream & o, Worker const & i );

#endif /* ********************************************************** WORKER_H */