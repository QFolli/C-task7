#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator; // ���������
    int denominator; // �����������
public:
    Fraction(int n, int d) { // �����������
        numerator = n;
        denominator = d;
    }
    Fraction() { // ����������� �� ���������
        numerator = 0;
        denominator = 1;
    }
    void reduce() { // ����� ��� ���������� ����� �� ������������� ����
        int gcd = 1;
        for (int i = 1; i <= numerator && i <= denominator; i++) {
            if (numerator % i == 0 && denominator % i == 0) {
                gcd = i;
            }
        }
        numerator /= gcd;
        denominator /= gcd;
    }
    Fraction operator+(Fraction f) { // ����� ��� �������� ������
        int n = numerator * f.denominator + f.numerator * denominator;
        int d = denominator * f.denominator;
        Fraction result(n, d);
        result.reduce();
        return result;
    }
    Fraction operator-(Fraction f) { // ����� ��� ��������� ������
        int n = numerator * f.denominator - f.numerator * denominator;
        int d = denominator * f.denominator;
        Fraction result(n, d);
        result.reduce();
        return result;
    }
    Fraction operator*(Fraction f) { // ����� ��� ��������� ������
        int n = numerator * f.numerator;
        int d = denominator * f.denominator;
        Fraction result(n, d);
        result.reduce();
        return result;
    }
    Fraction operator/(Fraction f) { // ����� ��� ������� ������
        int n = numerator * f.denominator;
        int d = denominator * f.numerator;
        Fraction result(n, d);
        result.reduce();
        return result;
    }
    void print() { // ����� ��� ������ ����� �� �����
        cout << numerator << "/" << denominator << endl;
    }
};
/*
int main() {
    Fraction f1(2, 3);
    Fraction f2(3, 4);

    cout << "f1 + f2 = ";
    (f1 + f2).print();

    cout << "f1 - f2 = ";
    (f1 - f2).print();

    cout << "f1 * f2 = ";
    (f1 * f2).print();

    cout << "f1 / f2 = ";
    (f1 / f2).print();

}*/