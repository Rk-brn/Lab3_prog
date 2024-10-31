#include "Category.h"
#include <cstring>

Category::Category(const char* name) :
    next(nullptr) {
    strncpy(this->name, name, 50);
    this->name[50] = '\0'; // ���������� ������������ ����
}

Category::~Category() {}

const char* Category::getName() const { return name; }
Category* Category::getNext() const { return next; }

void Category::setName(const char* newName) {
    strncpy(name, newName, 50);
    name[50] = '\0'; // ���������� ������������ ����
}
void Category::setNext(Category* nextCategory) { next = nextCategory; }

// ����� ��� ���������� ���������
void Category::linkCategory(Category* newCategory) {
    // ���������, ���� �� ��� ��������� ���������
    if (next == nullptr) {
        next = newCategory;
    }
    else {
        // ���� ��������� ��������� ����, �� ��������� ����� ��������� 
        // � ����� ���������� ������.
        Category* current = next;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(newCategory);
    }
}