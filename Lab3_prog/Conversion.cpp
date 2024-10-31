#include "Conversion.h"
#include <cstring>

Conversion::Conversion(const char* currency, int currency_rate, User* user) :
    user(user), next(nullptr) {
    strncpy(this->currency, currency, 50);
    this->currency[50] = '\0'; // Добавление завершающего нуля
    this->currency_rate = currency_rate;
}

Conversion::~Conversion() {}

const char* Conversion::getCurrency() const { return currency; }
int Conversion::getCurrencyRate() const { return currency_rate; }
User* Conversion::getUser() const { return user; }
Conversion* Conversion::getNext() const { return next; }

void Conversion::setCurrency(const char* newCurrency) {
    strncpy(currency, newCurrency, 50);
    currency[50] = '\0'; // Добавление завершающего нуля
}
void Conversion::setCurrencyRate(int newCurrencyRate) { currency_rate = newCurrencyRate; }
void Conversion::setUser(User* newUser) { user = newUser; }
void Conversion::setNext(Conversion* nextConversion) { next = nextConversion; }