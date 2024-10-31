#pragma once
#include <string>

class Category {
private:
    char name[50];
    Category* next; // Указатель на следующую категорию

public:
    // Конструктор
    Category(const char* name);

    // Деструктор
    ~Category();

    // Геттеры
    const char* getName() const;
    Category* getNext() const; // Геттер для указателя на следующую категорию

    // Сеттеры
    void setName(const char* newName);
    void setNext(Category* nextCategory); // Сеттер для указателя на следующую категорию

    // Метод для связывания категорий
    void linkCategory(Category* newCategory);
};