#ifndef WORKSHOP_HPP
# define WORKSHOP_HPP

# include <iostream>
# include <string>
# include "Worker.hpp"
# include <vector>

class Worker;
class Workshop
{
	std::vector<Worker *> workers;

	public:

		Workshop();
		Workshop( Workshop const & src );
		~Workshop();

		Workshop &		operator=( Workshop const & rhs );
		void registerWorker(Worker *worker);
		void releaseWorker(Worker *worker);
		void executeWorkDay();

	private:

};

std::ostream &			operator<<( std::ostream & o, Workshop const & i );

#endif /* ******************************************************** WORKSHOP_H */