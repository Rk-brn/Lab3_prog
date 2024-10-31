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
    // �����������
    Analytics(int totalIncome, int totalExpense, User* user, Account* account);

    // ����������
    ~Analytics();

    // �������
    int getTotalIncome() const;
    int getTotalExpense() const;
    User* getUser() const;
    Account* getAccount() const;

    // �������
    void setTotalIncome(int newTotalIncome);
    void setTotalExpense(int newTotalExpense);
    void setUser(User* newUser);
    void setAccount(Account* newAccount);
};