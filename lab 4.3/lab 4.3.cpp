#include <iostream>
#include <vector>
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

        // Виведення результатів
        cout << " x = " << x << ", F = " << F << "\n";
    }

    return 0;
}
