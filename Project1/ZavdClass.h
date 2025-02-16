#pragma once
using namespace System;

ref class ZavdClass {
private:
    double a, b;

public:
    // Конструктор за замовчуванням
    ZavdClass() { a = 1; b = 1; }

    // Обчислення функції b[x, y, z]
    void Fn_b(double x, double y, double z) {
        double numerator = y + Math::Atan(Math::Pow(z + z, 2)) * Math::Pow(x, 0.1);
        double denominator = (3 / x) + Math::Pow(Math::Sin(y + z), 2);
        b = (numerator / denominator) + Math::Pow(y, x * z);
    }

    // Обчислення функції a[x, y, z, b]
    void Fn_a(double x, double y, double z) {
        double numerator = Math::Sqrt(Math::Pow(x, 2) - Math::Pow(z, 3)) - Math::Pow(Math::Abs(Math::Sqrt(y) + 2 * b), 1.0 / 3);
        double denominator = 1 + (x / Faktr(1)) + (Math::Pow(y, 2) / Faktr(2)) + (Math::Pow(z, 3) / Faktr(3));
        a = numerator / denominator;
    }

    // Функція для обчислення факторіалу
    double Faktr(int n) {
        if (n <= 1) return 1;
        return n * Faktr(n - 1);
    }

    // Геттери для отримання значень a та b
    double geta() { return a; }
    double getb() { return b; }
};
