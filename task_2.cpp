#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand; // �����
    string model; // ������
    int year; // ��� �������
    string engine_type; // ��� ���������
    double fuel_amount; // ���������� ������� � ����

    void setBrand(string brand) { // ����� ��� ��������� �����
        this->brand = brand;
    }

    void setModel(string model) { // ����� ��� ��������� ������
        this->model = model;
    }

    void setYear(int year) { // ����� ��� ��������� ���� �������
        this->year = year;
    }

    void setEngineType(string engine_type) { // ����� ��� ��������� ���� ���������
        this->engine_type = engine_type;
    }

    void setFuelAmount(double fuel_amount) { // ����� ��� ��������� ���������� ������� � ����
        this->fuel_amount = fuel_amount;
    }

    void refuel(double fuel_amount) { // ����� ��� �������� ���������� ��������
        this->fuel_amount += fuel_amount;
    }

    void move(double distance) { // ����� ��� ����������� ���������� �� �������� ����������
        double fuel_consumption = distance / 10.0; // ����������� 10 �� �� ����
        if (fuel_consumption > fuel_amount) {
            cout << "������������ ������� ��� ����������� ����������!" << endl;
            return;
        }
        fuel_amount -= fuel_consumption;
        cout << "���������� ��������� �� " << distance << " ��." << endl;
    }
};
/*
int main() {
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Camry");
    myCar.setYear(2015);
    myCar.setEngineType("������");
    myCar.setFuelAmount(50.0);

    cout << "��������� ��������:" << endl;
    cout << "�����: " << myCar.brand << endl;
    cout << "������: " << myCar.model << endl;
    cout << "��� �������: " << myCar.year << endl;
    cout << "��� ���������: " << myCar.engine_type << endl;
    cout << "���������� ������� � ����: " << myCar.fuel_amount << endl;

    myCar.refuel(20.0);
    cout << "\n����� ��������:" << endl;
    cout << "���������� ������� � ����: " << myCar.fuel_amount << endl;

    myCar.move(100.0);
    cout << "\n����� �����������:" << endl;
    cout << "���������� ������� � ����: " << myCar.fuel_amount << endl;

}*/