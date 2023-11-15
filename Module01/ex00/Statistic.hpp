#ifndef STATISTIC_HPP
# define STATISTIC_HPP

# include <iostream>
# include <string>

class Statistic
{

	public:
		int level;
		int exp;

		Statistic();
		Statistic( Statistic const & src );
		~Statistic();

		Statistic &		operator=( Statistic const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Statistic const & i );

#endif /* ******************************************************* STATISTIC_H */