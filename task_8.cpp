#include <iostream>
using namespace std;

// ������� ����� "������������ ����"
class ComputerGame {
public:
    // ������ ��� ������ � ���������� ����
    void startGame() {
        cout << "���� ��������!" << endl;
    }
    void endGame() {
        cout << "���� ���������!" << endl;
    }

    // ����� ��� ����������� �������� ��������� ���� �� ������
    virtual void displayGameState() = 0;
};

// �������� "���"
class RPG : public ComputerGame {
public:
    // ���������� ������ ��� ����������� �������� ��������� ���� �� ������
    void displayGameState() {
        cout << "����������� �������� ��������� ���-���� �� ������" << endl;
    }
};

// �������� "�����"
class Shooter : public ComputerGame {
public:
    // ���������� ������ ��� ����������� �������� ��������� ���� �� ������
    void displayGameState() {
        cout << "����������� �������� ��������� �����-���� �� ������" << endl;
    }
};
/*
int main() {
    // �������� �������� �������
    RPG rpgGame;
    Shooter shooterGame;

    // ����� ������� ��������
    rpgGame.startGame();
    rpgGame.displayGameState();
    rpgGame.endGame();

    shooterGame.startGame();
    shooterGame.displayGameState();
    shooterGame.endGame();

}*/