#pragma once
#include <string>
#include "User.h"
#include "Transaction.h"


class Account {
private:
    char name[50];
    User* user;
    Transaction* transactions;

public:
    // Конструктор
    Account(const char* name, User* user);

    // Деструктор
    ~Account();

    // Геттеры
    const char* getName() const;
    User* getUser() const;
    Transaction* getTransactions() const;

    // Сеттеры
    void setName(const char* newName);
    void setUser(User* newUser);
    void setTransactions(Transaction* newTransactions);
};