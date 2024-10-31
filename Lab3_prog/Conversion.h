#pragma once
#include <string>
#include "User.h"

class Conversion {
private:
    char currency[50];
    int currency_rate;
    User* user;
    Conversion* next; // ��������� �� ��������� ������ Conversion

public:
    // �����������
    Conversion(const char* currency, int currency_rate, User* user);

    // ����������
    ~Conversion();

    // �������
    const char* getCurrency() const;
    int getCurrencyRate() const;
    User* getUser() const;
    Conversion* getNext() const; // ������ ��� ��������� �� ��������� ������ Conversion

    // �������
    void setCurrency(const char* newCurrency);
    void setCurrencyRate(int newCurrencyRate);
    void setUser(User* newUser);
    void setNext(Conversion* new_nextConversion); // ������ ��� ��������� �� ��������� ������ Conversion
};