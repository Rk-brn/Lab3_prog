#pragma once

#include "Account.h"
#include "Goal.h"
#include "Contribution.h"
#include "Loan.h"

#define MAX_USERNAME_LEN 256
#define MAX_PASSWORD_LEN 256

class User {
private:
    int id;
    char username[MAX_USERNAME_LEN + 1];
    char password[MAX_PASSWORD_LEN + 1];
    int balance;
    Account* primaryAccount;
    Goal* goal;
    Contribution* contribution;
    Loan* loan;
    User* next;

public:
    // Конструктор
    User(int id, const char* username, const char* password, int balance);
    // Деструктор
    ~User();

    // Геттеры
    int getId() const;
    const char* getUsername() const;
    const char* getPassword() const;
    int getBalance() const;
    Account* getPrimaryAccount() const;
    Goal* getGoal() const;
    Contribution* getContribution() const;
    Loan* getLoan() const;
    User* getNext() const;

    // Сеттеры
    void setBalance(int newBalance);
    void setPrimaryAccount(Account* newAccount);
    void setGoal(Goal* newGoal);
    void setContribution(Contribution* newContribution);
    void setLoan(Loan* newLoan);
    void setNext(User* nextUser);

    // Методы для управления пользователем
    void changeUsername(const char* newUsername);
    void changePassword(const char* newPassword);

    // Методы для управления связанными структурами
    void createPrimaryAccount(int initialBalance);
    void createGoal(int targetAmount, const char* description);
    void createContribution(int percent, int minimum_deposit);
    void createLoan(int amount, int interestRate);

    // Дополнительные методы
    void addBalance(int amount);
    void withdrawBalance(int amount);
};