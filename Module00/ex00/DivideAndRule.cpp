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

	Account *createAccount(int p_value)
	{
		Account *newAccount = new Account();
		newAccount->id = clientAccounts.size();
		newAccount->value = p_value;
		clientAccounts.push_back(newAccount);
		return (newAccount);
	}

	Account *deleteAccount(int p_id)
	{
		Account *deletedAccount = nullptr;
		for (std::vector<Account *>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
		{
			if ((*it)->id == p_id)
			{
				deletedAccount = *it;
				clientAccounts.erase(it);
				break;
			}
		}
		return (deletedAccount);
	}

	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
	{
		p_os << "Bank informations : " << std::endl;
		p_os << "Liquidity : " << p_bank.liquidity << std::endl;
		// for (auto &clientAccount : p_bank.clientAccounts)
		for (std::vector<Account *>::const_iterator it = p_bank.clientAccounts.begin(); it != p_bank.clientAccounts.end(); ++it)
		{
			p_os << **it << std::endl;
		}
		return (p_os);
	}

	friend struct Account;
};

int main()
{
	Account accountA = Account();
	accountA.id = 0;
	accountA.value = 100;

	Account accountB = Account();
	accountB.id = 1;
	accountB.value = 100;

	Bank bank = Bank();
	bank.liquidity = 999;
	bank.clientAccounts.push_back(&accountA);
	bank.clientAccounts.push_back(&accountB);

	bank.liquidity -= 200;
	accountA.value += 400;

	std::cout << "Account : " << std::endl;
	std::cout << accountA << std::endl;
	std::cout << accountB << std::endl;

	std::cout << " ----- " << std::endl;

	std::cout << "Bank : " << std::endl;
	std::cout << bank << std::endl;

	return (0);
}
