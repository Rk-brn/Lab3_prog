#include "User.h"
#include <cstring>
#include <iostream>

// �����������
User::User(int id, const char* username, const char* password, int balance) :
    id(id), balance(balance) {
    strcpy(this->username, username);
    strcpy(this->password, password);
    primaryAccount = nullptr;
    goal = nullptr;
    contribution = nullptr;
    loan = nullptr;
    next = nullptr;
}

// ����������
User::~User() {
    // ����������� ������, ���� ��� �������� �����������
    // ��� primaryAccount, goal, contribution, loan
    // (���� ��� ��������� �������� ����������� ���������� ������) 
    // ...
}

// �������
int User::getId() const { return id; }
const char* User::getUsername() const { return username; }
const char* User::getPassword() const { return password; }
int User::getBalance() const { return balance; }
Account* User::getPrimaryAccount() const { return primaryAccount; }
Goal* User::getGoal() const { return goal; }
Contribution* User::getContribution() const { return contribution; }
Loan* User::getLoan() const { return loan; }
User* User::getNext() const { return next; }

// �������
void User::setBalance(int newBalance) { balance = newBalance; }
void User::setPrimaryAccount(Account* newAccount) { primaryAccount = newAccount; }
void User::setGoal(Goal* newGoal) { goal = newGoal; }
void User::setContribution(Contribution* newContribution) { contribution = newContribution; }
void User::setLoan(Loan* newLoan) { loan = newLoan; }
void User::setNext(User* nextUser) { next = nextUser; }

// ������ ��� ���������� �������������
void User::changeUsername(const char* newUsername) {
    strcpy(username, newUsername);
}

void User::changePassword(const char* newPassword) {
    strcpy(password, newPassword);
}

// ������ ��� ���������� ���������� �����������
void User::createPrimaryAccount(int initialBalance) {
    primaryAccount = new Account{ initialBalance, this };
}

void User::createGoal(int targetAmount, const char* description) {
    goal = new Goal{ targetAmount, description, this };
}

void User::createContribution(int percent, int minimum_deposit) {
    contribution = new Contribution{ percent, minimum_deposit, this };
}

void User::createLoan(int amount, int interestRate) {
    loan = new Loan{ amount, interestRate, this };
}

// �������������� ������
void User::addBalance(int amount) { balance += amount; }
void User::withdrawBalance(int amount) {
    if (balance >= amount) {
        balance -= amount;
    }
    else {
        std::cerr << "������������ ������� �� �������." << std::endl;
    }
}