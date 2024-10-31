#include "Goal.h"
#include <cstring> // Äëÿ strcpy

Goal::Goal(const char* name, int targetAmount, User* user) :
    savedAmount(0), user(user) {
    strncpy(this->name, name, MAX_GOAL_NAME_LEN);
    this->name[MAX_GOAL_NAME_LEN] = '\0';
    this->targetAmount = targetAmount;
}

Goal::~Goal() {}

const char* Goal::getName() const { return name; }
int Goal::getTargetAmount() const { return targetAmount; }
int Goal::getSavedAmount() const { return savedAmount; }
User* Goal::getUser() const { return user; }

void Goal::setTargetAmount(int newTargetAmount) { targetAmount = newTargetAmount; }
void Goal::setName(const char* newName) {
    strncpy(name, newName, MAX_GOAL_NAME_LEN);
    name[MAX_GOAL_NAME_LEN] = '\0';
}

void Goal::addSavedAmount(int amount) { savedAmount += amount; }