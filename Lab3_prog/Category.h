#pragma once
#include <string>

class Category {
private:
    char name[50];
    Category* next; // ��������� �� ��������� ���������

public:
    // �����������
    Category(const char* name);

    // ����������
    ~Category();

    // �������
    const char* getName() const;
    Category* getNext() const; // ������ ��� ��������� �� ��������� ���������

    // �������
    void setName(const char* newName);
    void setNext(Category* nextCategory); // ������ ��� ��������� �� ��������� ���������

    // ����� ��� ���������� ���������
    void linkCategory(Category* newCategory);
};