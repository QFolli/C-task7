#include <iostream>
#include <string>
using namespace std;

class Bank {
public:
    // ����������� ������
    Bank(string accountNumber, double balance, double interestRate) {
        this->accountNumber = accountNumber;
        this->balance = balance;
        this->interestRate = interestRate;
    }

    // ����� ��� �������� ����������� �����
    void openAccount() {
        cout << "���������� ���� ������." << endl;
    }

    // ����� ��� �������� ����������� �����
    void closeAccount() {
        cout << "���������� ���� ������." << endl;
    }

    // ����� ��� �������� ����� ����� �������
    void transferMoney(Bank& otherAccount, double amount) {
        if (balance >= amount) {
            balance -= amount;
            otherAccount.balance += amount;
            cout << "������� �������� �������." << endl;
        }
        else {
            cout << "������������ ������� �� �����." << endl;
        }
    }

private:
    string accountNumber;   // ����� �����
    double balance;         // ������
    double interestRate;    // ���������� ������
};
/*
int main() {
    // �������� ���� ���������� ������
    Bank account1("1234567890", 1000.0, 0.01);
    Bank account2("0987654321", 500.0, 0.02);

    // �������� ���������� ������
    account1.openAccount();
    account2.openAccount();

    // ������� ����� ����� �������
    account1.transferMoney(account2, 500.0);

    // �������� ���������� ������
    account1.closeAccount();
    account2.closeAccount();

}*/