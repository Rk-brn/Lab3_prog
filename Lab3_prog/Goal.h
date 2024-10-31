#pragma once
#include <string>
#include "User.h"

#define MAX_GOAL_NAME_LEN 256
class Goal{
private:
    char name[MAX_GOAL_NAME_LEN + 1];
    int targetAmount;
    int savedAmount;
    User* user;

public:
    // Конструктор
    Goal(const char* name, int targetAmount, User* user);

    // Деструктор
    ~Goal();

    // Геттеры
    const char* getName() const;
    int getTargetAmount() const;
    int getSavedAmount() const;
    User* getUser() const;

    // Сеттеры
    void setTargetAmount(int newTargetAmount);
    void setName(const char* newName);

    // Методы
    void addSavedAmount(int amount);
};