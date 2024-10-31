#pragma once
#include <string>
#include "User.h"

class Contribution {
private:
    int percent;
    int minimum_deposit;
    User* user;
    Contribution* next; // ��������� �� ��������� �����

public:
    // �����������
    Contribution(int percent, int minimum_deposit, User* user);

    // ����������
    ~Contribution();

    // �������
    int getPercent() const;
    int getMinimumDeposit() const;
    User* getUser() const;
    Contribution* getNext() const; // ������ ��� ��������� �� ��������� �����

    // �������
    void setPercent(int newPercent);
    void setMinimumDeposit(int newMinimumDeposit);
    void setUser(User* newUser);
    void setNext(Contribution* nextContribution); // ������ ��� ��������� �� ��������� �����

 
};
