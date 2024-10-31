#pragma once
#include <string>
#include "User.h"

class Conversion {
private:
    char currency[50];
    int currency_rate;
    User* user;
    Conversion* next; // Указатель на следующий объект Conversion

public:
    // Конструктор
    Conversion(const char* currency, int currency_rate, User* user);

    // Деструктор
    ~Conversion();

    // Геттеры
    const char* getCurrency() const;
    int getCurrencyRate() const;
    User* getUser() const;
    Conversion* getNext() const; // Геттер для указателя на следующий объект Conversion

    // Сеттеры
    void setCurrency(const char* newCurrency);
    void setCurrencyRate(int newCurrencyRate);
    void setUser(User* newUser);
    void setNext(Conversion* new_nextConversion); // Сеттер для указателя на следующий объект Conversion
};