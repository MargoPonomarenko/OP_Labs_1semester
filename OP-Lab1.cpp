﻿// OP-Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
#include <math.h> 
#include <locale>
using namespace std;
int main()
{
    float a, b, c, r ; 
    setlocale(LC_CTYPE, "ukr");
    cout << " Данi гiпотенуза i катет прямокутного трикутника. Знайти радiус вписаного у нього кола.\n"; // умова задачі
    cout << " Введiть значення гiпотенузи та катета \n";
    cin >> c >> a;
    b = sqrt(pow(c, 2) - pow(a, 2));
    r = (a + b - c) / 2;
    cout << "Радiус вписаного окола - " << r;
}



// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.