#pragma once
#include <string>



#define MAX_DESCRIPTION_LEN 100
#define MAX_DATE_LEN 11
#define MAX_TYPE_LEN 10


class Transaction {
private:
    char description[MAX_DESCRIPTION_LEN + 1];
    int amount;
    char date[MAX_DATE_LEN + 1];
    char type[MAX_TYPE_LEN + 1];
    Account* account;
    Category* category;

public:
    // Конструктор
    Transaction(const char* description, int amount, const char* date, const char* type,
        Account* account, Category* category);

    // Деструктор
    ~Transaction();

    // Геттеры
    const char* getDescription() const;
    int getAmount() const;
    const char* getDate() const;
    const char* getType() const;
    Account* getAccount() const;
    Category* getCategory() const;

    // Сеттеры
    void setDescription(const char* newDescription);
    void setAmount(int newAmount);
    void setDate(const char* newDate);
    void setType(const char* newType);
    void setAccount(Account* newAccount);
    void setCategory(Category* newCategory);
};
