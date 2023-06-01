class Account
{
public:
	explicit Account(int balance) : balance(balance)
	{
	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

	void setInterest(int inter)
	{
		interest = inter;
	}

	int getInterest()
	{
		return interest;
	}

	void increase()
	{
		balance += balance * 0.01 * interest;
	}


private:
	int balance;
	int interest = 5;
};