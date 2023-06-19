#include <iostream>
#include <string>
#include <list>

using namespace std;

// ���������� ����� "�������"
class Contact {
public:
    string name;
    string surname;
    string phone_number;
    string email;

    // ����������� ������
    Contact(string name, string surname, string phone_number, string email) {
        this->name = name;
        this->surname = surname;
        this->phone_number = phone_number;
        this->email = email;
    }
};

// ���������� ����� "���������� �����"
class Phonebook {
public:
    list<Contact> contacts;

    // ����� ��� ���������� ��������
    void add_contact(Contact contact) {
        contacts.push_back(contact);
    }

    // ����� ��� �������� ��������
    void remove_contact(string name) {
        for (auto it = contacts.begin(); it != contacts.end(); ++it) {
            if (it->name == name) {
                contacts.erase(it);
                break;
            }
        }
    }

    // ����� ��� ������ �������� �� �����
    Contact find_contact(string name) {
        for (auto it = contacts.begin(); it != contacts.end(); ++it) {
            if (it->name == name) {
                return *it;
            }
        }
        return Contact("", "", "", "");
    }
};
/*
int main() {
    // ������� ������ ������ "���������� �����"
    Phonebook phonebook;

    // ������� ��������� ���������
    Contact contact1("����", "������", "+7-999-123-45-67", "ivanov@example.com");
    Contact contact2("����", "������", "+7-999-234-56-78", "petrov@example.com");
    Contact contact3("�����", "�������", "+7-999-345-67-89", "sidorov@example.com");

    // ��������� �������� � ���������� �����
    phonebook.add_contact(contact1);
    phonebook.add_contact(contact2);
    phonebook.add_contact(contact3);

    // ���� ������� �� �����
    Contact found_contact = phonebook.find_contact("����");

    // ������� ���������� � ��������� ��������
    cout << found_contact.name << endl;
    cout << found_contact.surname << endl;
    cout << found_contact.phone_number << endl;
    cout << found_contact.email << endl;

    // ������� ������� �� ���������� �����
    phonebook.remove_contact("����");

}*/