#pragma once
#include <iostream>
#include <string>
class Account {
	std::string m_name;
	int m_accountNum;
	double m_balance;
	void setBalance(double balance);
public:
	Account(const std::string name, int accountNum, double balance);
	Account(const Account& other);
	Account& operator=(const Account& other);
	Account(Account&& other) noexcept;
	Account& operator=(Account&& other) noexcept;
	virtual ~Account();
	std::string getName() const;
	void setName(std::string name);
	int getAccountNum() const;
	double getBalance() const;
	void deposit(double amount);
	virtual void withdraw(double amount);
	void print(std::ostream& os) const;
};
class SavingAccount : public Account {
	double m_interest;
public:
	void withdraw(double amount) override;

};
class ChequingAccount : public Account {
	double m_overdraft;
public:
	void withdraw(double amount) override;
};