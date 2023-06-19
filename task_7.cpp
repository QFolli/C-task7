#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;
    int health;
    int attack;
    int defense;

    // ����������� ������
    Player(string n, int h, int a, int d) {
        name = n;
        health = h;
        attack = a;
        defense = d;
    }

    // ������ ��� ��������� �������� �����
    void setName(string n) {
        name = n;
    }

    void setHealth(int h) {
        health = h;
    }

    void setAttack(int a) {
        attack = a;
    }

    void setDefense(int d) {
        defense = d;
    }

    // ������ ��� ����� � ������ ������
    void attackPlayer(Player& p) {
        p.health -= attack - p.defense;
    }

    void defendPlayer(Player& p) {
        health += p.attack - defense;
    }
};

// �������� "����"
class Warrior : public Player {
public:
    Warrior(string n, int h, int a, int d) : Player(n, h, a, d) {}

    // ���������� ������� ��� ����� � ������ ������ ���� "����"
    void attackPlayer(Player& p) {
        p.health -= (attack + 10) - p.defense;
    }

    void defendPlayer(Player& p) {
        health += p.attack / 2 - defense;
    }
};

// �������� "���"
class Mage : public Player {
public:
    Mage(string n, int h, int a, int d) : Player(n, h, a, d) {}

    // ���������� ������� ��� ����� � ������ ������ ���� "���"
    void attackPlayer(Player& p) {
        p.health -= (attack * 2) - p.defense;
    }

    void defendPlayer(Player& p) {
        health += p.attack / 4 - defense;
    }
};

// �������� "������"
class Archer : public Player {
public:
    Archer(string n, int h, int a, int d) : Player(n, h, a, d) {}

    // ���������� ������� ��� ����� � ������ ������ ���� "������"
    void attackPlayer(Player& p) {
        p.health -= (attack + 5) - p.defense;
    }

    void defendPlayer(Player& p) {
        health += p.attack / 3 - defense;
    }
};
/*
int main() {

    // �������� �������� ������ "�����" � ��� ����������
    Player player("�����", 100, 20, 10);
    Warrior warrior("����", 150, 30, 20);
    Mage mage("���", 80, 40, 5);
    Archer archer("������", 120, 25, 15);

    // ��������� �������� ����� �������� ������ "�����" � ��� ����������
    player.setName("����� �����");
    warrior.setHealth(200);
    mage.setAttack(50);
    archer.setDefense(25);

    // ����� � ������ �������� ������ "�����" � ��� ����������
    player.attackPlayer(warrior);
    warrior.defendPlayer(player);

    mage.attackPlayer(archer);
    archer.defendPlayer(mage);

}*/