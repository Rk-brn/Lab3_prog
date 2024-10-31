#include "Account.h"
#include <cstring> // Для strcpy

Account::Account(const char* name, User* user) :
    user(user) {
    strncpy(this->name, name, 50);
    this->name[50] = '\0'; // Добавление завершающего нуля
}

Account::~Account() {}

const char* Account::getName() const { return name; }
User* Account::getUser() const { return user; }
Transaction* Account::getTransactions() const { return transactions; }

void Account::setName(const char* newName) { strncpy(name, newName, 50); }
void Account::setUser(User* newUser) { user = newUser; }
void Account::setTransactions(Transaction* newTransactions) { transactions = newTransactions; }