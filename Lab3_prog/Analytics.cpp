#include "Analytics.h"

Analytics::Analytics(int totalIncome, int totalExpense, User* user, Account* account) :
    totalIncome(totalIncome), totalExpense(totalExpense), user(user), account(account) {
}

Analytics::~Analytics() {}

int Analytics::getTotalIncome() const { return totalIncome; }
int Analytics::getTotalExpense() const { return totalExpense; }
User* Analytics::getUser() const { return user; }
Account* Analytics::getAccount() const { return account; }

void Analytics::setTotalIncome(int newTotalIncome) { totalIncome = newTotalIncome; }
void Analytics::setTotalExpense(int newTotalExpense) { totalExpense = newTotalExpense; }
void Analytics::setUser(User* newUser) { user = newUser; }
void Analytics::setAccount(Account* newAccount) { account = newAccount; }