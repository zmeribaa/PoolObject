#include <iostream>
#include <vector>

struct Account
{
	private:
		int id;
		int value;


	Account() :
		id(-1),
		value(0)
	{
	
	}

	public:
		int getId() const{
			return (id);
		}

		int getValue() const
		{
			return (value);
		}


	friend struct Bank;
};

	std::ostream& operator << (std::ostream&os, const Account& account)
	{
		os << "[" << account.getId() << "] - [" << account.getValue() << "]";
		return (os);
	}
struct Bank
{
	private:
		int liquidity;
		std::vector<Account *> clientAccounts;
	public:
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

		int  createAccount(int value)
		{
			Account *newAccount = new Account();
			newAccount->id = clientAccounts.size();
			newAccount->value = value * 0.95;
			liquidity += value * 0.05;
			clientAccounts.push_back(newAccount);
			std::cout << "Account Created" << std::endl;
			return (newAccount->id);
		}

		void deleteAccount(int id)
		{
			if(!id)
				return;
			for (std::vector<Account *>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
			{
				if ((*it)->id == id)
				{
					clientAccounts.erase(it);
					break;
				}
			}
			std::cout << "Account Deleted" << std::endl;
		}

		void modifyAccount(int id, int value)
		{
			if(id)
			{
				for (std::vector<Account *>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
				{
					if ((*it)->id == id)
					{
						(*it)->value = value * 0.95;
						liquidity += value * 0.05;
						break;
					}
				}
				std::cout << "Account Modified" << std::endl;
			}
			std::cout << "Account not found" << std::endl;
		}

		void loan(int id, int value)
		{
			for (std::vector<Account *>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
			{
				if ((*it)->id == id)
				{
					if (liquidity < value)
					{
						std::cout << "Not enough liquidity" << std::endl;
						return;
					}
					(*it)->value += value;
					liquidity -= value;
					std::cout << "Account Modified" << std::endl;
					return;
				}
			}
			std::cout << "Account not found" << std::endl;
		}


	friend struct Account;
};

		std::ostream& operator << (std::ostream& os, const Bank& bank)
		{
			os << "Bank informations : " << std::endl;
			os << "Liquidity : " << bank.getTotalLiquidity() << std::endl;
			// for (auto &clientAccount : bank.clientAccounts)
			for (std::vector<Account *>::const_iterator it = bank.getClientAccounts().begin(); it != bank.getClientAccounts().end(); ++it)
				os << **it << std::endl;
			return (os);
		}
int main()
{
	Bank bank;
	int id1 = bank.createAccount(1000);
	int id2 = bank.createAccount(2000);
	int id3 = bank.createAccount(3000);
	std::cout << bank << std::endl;
	bank.deleteAccount(id2);
	std::cout << bank << std::endl;
	bank.modifyAccount(id1, 5000);
	std::cout << bank << std::endl;
	bank.loan(id3, 1000);
	std::cout << bank << std::endl;
	return (0);
	
}
