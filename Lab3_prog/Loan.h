#pragma once
#include <string>
#include "User.h"

class Loan {
private:
    int amount;
    int interestRate;
    User* user;
    Loan* next; // Указатель на следующий кредит

public:
    // Конструктор
    Loan(int amount, int interestRate, User* user);

    // Деструктор
    ~Loan();

    // Геттеры
    int getAmount() const;
    int getInterestRate() const;
    User* getUser() const;
    Loan* getNext() const; // Геттер для указателя на следующий кредит

    // Сеттеры
    void setAmount(int newAmount);
    void setInterestRate(int newInterestRate);
    void setUser(User* newUser);
    void setNext(Loan* nextLoan); // Сеттер для указателя на следующий кредит

    // Метод для связывания кредитов
    void linkLoan(Loan* newLoan);
};
