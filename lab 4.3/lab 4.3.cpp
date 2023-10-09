// Lab_04_3.cpp
// < Цай Девід >
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 23
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, xp, xk, dx;

    // Введення даних
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;
    cout << " xp = ";
    cin >> xp;
    cout << " xk = ";
    cin >> xk;
    cout << " dx = ";
    cin >> dx;
    cout << "-----------------------------" << endl;
    cout << "|" << setw(7) << "x" << "      |"
        << setw(9) << "F" << "    |" << endl;
    cout << "-----------------------------" << endl;

    // Обчислення значень функції
    for (double x = xp; x <= xk; x += dx) {
        double F;
        if (a < 0 && c != 0) {
            F = a * pow(x, 2) + b * x + c;
        }
        else if (a > 0 && c == 0) {
            F= -a / (x - b);
        }
        else if (!(a < 0 && c != 0) && !(a > 0 && c == 0)){
            F = a * (x + c);
        }
        cout << "|" << setw(12) << setprecision(4) << x
            << " |" << setw(12) << setprecision(4) << F
            << " |" << endl;

    
    }
    cout << "-----------------------------" << endl;
    return 0;
}
