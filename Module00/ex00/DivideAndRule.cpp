#include <iostream>
#include <vector>

struct Account
{
	protected:
		int id;
		int value;


	Account() :
		id(-1),
		value(0)
	{
	
	}


	int getID() const{
		return (id);
	}

	int getValue() const
	{
		return (value);
	}

	friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
	{
		p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
		return (p_os);
	}

	friend struct Bank;
};

struct Bank
{
	protected:
		int liquidity;
		std::vector<Account *> clientAccounts;

	Bank() :
		liquidity(0)
	{

	}

	int getTotalLiquidity() const
	{
		return (liquidity);
	}

	std::vector<Account *> getClientAccounts() const
	{
		return (clientAccounts);
	}

	int  createAccount(int p_value)
	{
		Account *newAccount = new Account();
		newAccount->id = clientAccounts.size();
		newAccount->value = p_value * 0.95;
		liquidity += p_value * 0.05;
		clientAccounts.push_back(newAccount);
		std::cout << "Account Created" << std::endl;
		return (newAccount->id);
	}

	void deleteAccount(int p_id)
	{
		if(!p_id)
			return;
		for (std::vector<Account *>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
		{
			if ((*it)->id == p_id)
			{
				clientAccounts.erase(it);
				break;
			}
		}
		std::cout << "Account Deleted" << std::endl;
	}

	void modifyAccount(int p_id, int p_value)
	{
		if(p_id)
		{
			for (std::vector<Account *>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
			{
				if ((*it)->id == p_id)
				{
					(*it)->value = p_value * 0.95;
					liquidity += p_value * 0.05;
					break;
				}
			}
			std::cout << "Account Modified" << std::endl;
		}
		std::cout << "Account not found" << std::endl;
	}

	void loan(int p_id, int p_value)
	{
		for (std::vector<Account *>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
		{
			if ((*it)->id == p_id)
			{
				(*it)->value += p_value;
				liquidity -= p_value;
				std::cout << "Account Modified" << std::endl;
				return;
			}
		}
		std::cout << "Account not found" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
	{
		p_os << "Bank informations : " << std::endl;
		p_os << "Liquidity : " << p_bank.liquidity << std::endl;
		// for (auto &clientAccount : p_bank.clientAccounts)
		for (std::vector<Account *>::const_iterator it = p_bank.clientAccounts.begin(); it != p_bank.clientAccounts.end(); ++it)
			p_os << **it << std::endl;
		return (p_os);
	}

	friend struct Account;
};

int main()
{
	
}
