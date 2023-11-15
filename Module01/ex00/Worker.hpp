#ifndef WORKER_HPP
# define WORKER_HPP

# include <iostream>
# include <string>
# include "Position.hpp"
# include "Statistic.hpp"
# include "Shovel.hpp"

class Worker
{
	Position coordonnee;
	Statistic stat;
	Shovel *pelle;

	public:

		Worker();
		Worker( Worker const & src );
		~Worker();

		Worker &		operator=( Worker const & rhs );
		void	assignShovel(Shovel *newShovel);
		void	removeShovel();
		void	useShovel();

	private:

};

std::ostream &			operator<<( std::ostream & o, Worker const & i );

#endif /* ********************************************************** WORKER_H */