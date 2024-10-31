#include "Contribution.h"

Contribution::Contribution(int percent, int minimum_deposit, User* user) :
    percent(percent), minimum_deposit(minimum_deposit), user(user), next(nullptr) {
}

Contribution::~Contribution() {}

int Contribution::getPercent() const { return percent; }
int Contribution::getMinimumDeposit() const { return minimum_deposit; }
User* Contribution::getUser() const { return user; }
Contribution* Contribution::getNext() const { return next; }


void Contribution::setPercent(int newPercent) { percent = newPercent; }
void Contribution::setMinimumDeposit(int newMinimumDeposit) { minimum_deposit = newMinimumDeposit; }
void Contribution::setUser(User* newUser) { user = newUser; }
void Contribution::setNext(Contribution* nextContribution) { next = nextContribution; }
