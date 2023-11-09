#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>
# include <string>
# include "Bank.hpp"

class Bank;

class Account
{
	protected:

		int id;
		int value;

	public:

		Account();
		Account( Account const & src );
		~Account();

		Account &		operator=( Account const & rhs );
		int getID() const;
		int getValue() const;


	private:

};

std::ostream& operator << (std::ostream& p_os, const Account& p_account);

#endif /* ********************************************************* ACCOUNT_H */