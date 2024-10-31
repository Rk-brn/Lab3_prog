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
    // �����������
    Account(const char* name, User* user);

    // ����������
    ~Account();

    // �������
    const char* getName() const;
    User* getUser() const;
    Transaction* getTransactions() const;

    // �������
    void setName(const char* newName);
    void setUser(User* newUser);
    void setTransactions(Transaction* newTransactions);
};