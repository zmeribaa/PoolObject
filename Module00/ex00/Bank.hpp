#ifndef BANK_HPP
# define BANK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "Account.hpp"

class Account;
class Bank
{
	protected:

		int liquidity;
		std::vector<Account *> clientAccounts;

	public:

		Bank();
		Bank( Bank const & src );
		~Bank();

		Bank &		operator=( Bank const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Bank const & i );

#endif /* ************************************************************ BANK_H */