#pragma once
#include <string>
#include "User.h"

class Loan {
private:
    int amount;
    int interestRate;
    User* user;
    Loan* next; // ��������� �� ��������� ������

public:
    // �����������
    Loan(int amount, int interestRate, User* user);

    // ����������
    ~Loan();

    // �������
    int getAmount() const;
    int getInterestRate() const;
    User* getUser() const;
    Loan* getNext() const; // ������ ��� ��������� �� ��������� ������

    // �������
    void setAmount(int newAmount);
    void setInterestRate(int newInterestRate);
    void setUser(User* newUser);
    void setNext(Loan* nextLoan); // ������ ��� ��������� �� ��������� ������

    // ����� ��� ���������� ��������
    void linkLoan(Loan* newLoan);
};
