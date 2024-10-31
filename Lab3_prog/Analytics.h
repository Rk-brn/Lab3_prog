#pragma once
#include <string>
#include "User.h"
#include "Account.h"

class Analytics {
private:
    int totalIncome;
    int totalExpense;
    User* user;
    Account* account;

public:
    // Конструктор
    Analytics(int totalIncome, int totalExpense, User* user, Account* account);

    // Деструктор
    ~Analytics();

    // Геттеры
    int getTotalIncome() const;
    int getTotalExpense() const;
    User* getUser() const;
    Account* getAccount() const;

    // Сеттеры
    void setTotalIncome(int newTotalIncome);
    void setTotalExpense(int newTotalExpense);
    void setUser(User* newUser);
    void setAccount(Account* newAccount);
};