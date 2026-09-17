// Lab_02.cpp
// Мацун Софія
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 19.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;   // вхідний параметр
    double z1;  // результат обчислення 1-го виразу
    double z2;  // результат обчислення 2-го виразу

    cout << "a = "; cin >> a;
    z1 = 1.0 / ((1 + a + a * a) / (2 * a + a * a)
        + 2
        - (1 - a + a * a) / (2 * a - a * a))
        * (5 - 2 * a * a);
    z2 = (4 - a * a) / 2;
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}