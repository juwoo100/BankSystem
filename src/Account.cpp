#include <iostream>
#include <string>
#include "Account.h"

Account::Account(const std::string name, int AccountNum, double balance) {

}
Account::Account(const Account& other) {

}
Account& Account::operator=(const Account& other) {

}
Account::Account(Account&& other) noexcept {

}
Account& Account::operator=(Account&& other) noexcept {

}
Account::~Account() {

}
std::string Account::getName() const {

}
void Account::setName(std::string name) {

}
int Account::getAccountNum() const {

}
void Account::setBalance(double balance) {

}
double Account::getBalance() const {

}
void Account::deposit(double amount) {

}
void Account::withdraw(double amount) {

}
void Account::print(std::ostream& os) const {

}
void SavingAccount::withdraw(double amount) {

}
void ChequingAccount::withdraw(double amount) {

}