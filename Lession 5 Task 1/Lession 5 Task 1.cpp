#include <iostream>
#include "Sum.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Degree.h"

using namespace std;

int main(){

    setlocale(LC_ALL, "rus"); system("chcp 1251");

    int a; cout << "Введите первое число:"; cin >> a;
    int b; cout << "Введите второе число:"; cin >> b;
    int c; cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):"; cin >> c; cout << endl;

    int resultSum = Sum(a, b);
    int resultSub = subtraction(a, b);
    int resultmul = multiplication(a, b);
    int resultDiv = division(a, b);
    int resultDeg = degree(a, b);

    switch (c)
    {
    case  1: cout << a << " + " << b << " = " << resultSum; break;
    case  2: cout << a << " - " << b << " = " << resultSub; break;
    case  3: cout << a << " * " << b << " = " << resultmul; break;
    case  4: cout << a << " | " << b << " = " << resultDiv; break;
    case  5: cout << a << " В степени " << b << " = " << resultDeg; break;
    default: cout << "Неверный ввод";
    }
    system("pause");
}