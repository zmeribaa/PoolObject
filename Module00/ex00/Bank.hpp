#ifndef BANK_HPP
# define BANK_HPP

# include <iostream>
# include <string>

class Bank
{

	public:

		Bank();
		Bank( Bank const & src );
		~Bank();

		Bank &		operator=( Bank const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Bank const & i );

#endif /* ************************************************************ BANK_H */