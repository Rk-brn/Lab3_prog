#pragma once
#include <string>
#include "User.h"

class Contribution {
private:
    int percent;
    int minimum_deposit;
    User* user;
    Contribution* next; // Указатель на следующий вклад

public:
    // Конструктор
    Contribution(int percent, int minimum_deposit, User* user);

    // Деструктор
    ~Contribution();

    // Геттеры
    int getPercent() const;
    int getMinimumDeposit() const;
    User* getUser() const;
    Contribution* getNext() const; // Геттер для указателя на следующий вклад

    // Сеттеры
    void setPercent(int newPercent);
    void setMinimumDeposit(int newMinimumDeposit);
    void setUser(User* newUser);
    void setNext(Contribution* nextContribution); // Сеттер для указателя на следующий вклад

 
};
