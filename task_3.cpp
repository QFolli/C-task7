#include <iostream>
using namespace std;

// ������� ����� "�������������� ������"
class GeometricFigure {
public:
    // ����������� ������ ��� ���������� ��������� � ������� ������
    virtual double Perimeter() = 0;
    virtual double Area() = 0;
};

// �������� "����"
class Circle : public GeometricFigure {
public:
    // ����������� ������
    Circle(double r) : radius(r) {}

    // ������ ��� ���������� ��������� � ������� �����
    double Perimeter() override {
        return 2 * 3.14 * radius;
    }
    double Area() override {
        return 3.14 * radius * radius;
    }

private:
    double radius; // ������ �����
};

// �������� "�������������"
class Rectangle : public GeometricFigure {
public:
    // ����������� ������
    Rectangle(double w, double h) : width(w), height(h) {}

    // ������ ��� ���������� ��������� � ������� ��������������
    double Perimeter() override {
        return 2 * (width + height);
    }
    double Area() override {
        return width * height;
    }

private:
    double width;  // ������ ��������������
    double height; // ������ ��������������
};

// �������� "�����������"
class Triangle : public GeometricFigure {
public:
    // ����������� ������
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

    // ������ ��� ���������� ��������� � ������� ������������
    double Perimeter() override {
        return sideA + sideB + sideC;
    }
    double Area() override {
        double p = (sideA + sideB + sideC) / 2;
        return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    }

private:
    double sideA; // ����� ������� A ������������
    double sideB; // ����� ������� B ������������
    double sideC; // ����� ������� C ������������
};
/*
int main() {
    // �������� �������� ������� "����", "�������������" � "�����������"
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    // ����� ������� ��� ���������� ��������� � ������� �����
    cout << "�������� �����: " << circle.Perimeter() << endl;
    cout << "������� �����: " << circle.Area() << endl;

    cout << "�������� ��������������: " << rectangle.Perimeter() << endl;
    cout << "������� ��������������: " << rectangle.Area() << endl;

    cout << "�������� ������������: " << triangle.Perimeter() << endl;
    cout << "������� ������������: " << triangle.Area() << endl;

}*/