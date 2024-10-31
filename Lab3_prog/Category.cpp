#include "Category.h"
#include <cstring>

Category::Category(const char* name) :
    next(nullptr) {
    strncpy(this->name, name, 50);
    this->name[50] = '\0'; // ƒобавление завершающего нул€
}

Category::~Category() {}

const char* Category::getName() const { return name; }
Category* Category::getNext() const { return next; }

void Category::setName(const char* newName) {
    strncpy(name, newName, 50);
    name[50] = '\0'; // ƒобавление завершающего нул€
}
void Category::setNext(Category* nextCategory) { next = nextCategory; }

// ћетод дл€ св€зывани€ категорий
void Category::linkCategory(Category* newCategory) {
    // ѕровер€ем, есть ли уже следующа€ категори€
    if (next == nullptr) {
        next = newCategory;
    }
    else {
        // ≈сли следующа€ категори€ есть, то добавл€ем новую категорию 
        // в конец св€занного списка.
        Category* current = next;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(newCategory);
    }
}