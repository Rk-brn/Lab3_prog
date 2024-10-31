#include "Loan.h"
#include <cstring>

Loan::Loan(int amount, int interestRate, User* user) :
    amount(amount), interestRate(interestRate), user(user), next(nullptr) {
}

Loan::~Loan() {}

int Loan::getAmount() const { return amount; }
int Loan::getInterestRate() const { return interestRate; }
User* Loan::getUser() const { return user; }
Loan* Loan::getNext() const { return next; }

void Loan::setAmount(int newAmount) { amount = newAmount; }
void Loan::setInterestRate(int newInterestRate) { interestRate = newInterestRate; }
void Loan::setUser(User* newUser) { user = newUser; }
void Loan::setNext(Loan* nextLoan) { next = nextLoan; }

// ����� ��� ���������� ��������
void Loan::linkLoan(Loan* newLoan) {
    // ���������, ���� �� ��� ��������� ������
    if (next == nullptr) {
        next = newLoan;
    }
    else {
        // ���� ��������� ������ ����, �� ��������� ����� ������ 
        // � ����� ���������� ������.
        Loan* current = next;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(newLoan);
    }
}