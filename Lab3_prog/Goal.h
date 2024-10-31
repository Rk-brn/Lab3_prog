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
    // �����������
    Goal(const char* name, int targetAmount, User* user);

    // ����������
    ~Goal();

    // �������
    const char* getName() const;
    int getTargetAmount() const;
    int getSavedAmount() const;
    User* getUser() const;

    // �������
    void setTargetAmount(int newTargetAmount);
    void setName(const char* newName);

    // ������
    void addSavedAmount(int amount);
};