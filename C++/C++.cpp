#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;


long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main()
{
    float a, b, h;
    char luft;
    int choice;
    setlocale(LC_ALL, "Russian");
    while (true) {
        cout << "Введите первое и второе число: \n";
        cin >> a >> b;
        cout << "Выберите действие: \n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (choice == 1) {
            std::cout << "Введите второе число: ";
            std::cin >> b;
            h = a + b;
        }
        else if (choice == 2) {
            std::cout << "Введите второе число: ";
            std::cin >> b;
            h = a - b;
        }
        else if (choice == 3) {
            std::cout << "Введите второе число: ";
            std::cin >> b;
            h = a * b;
        }
        else if (choice == 4) {
            std::cout << "Введите второе число: ";
            std::cin >> b;
            if (b != 0) {
                h = a / b;
            }
            else {
                std::cout << "Делить на ноль нельзя!" << std::endl;
                continue;
            }
        }
        else if (choice == 5) {
            std::cout << "Введите второе число: ";
            std::cin >> b;
            h = pow(a, b);
        }
        else if (choice == 6) {
            h = sqrt(a);
        }
        else if (choice == 7) {
            h = a / 100;
        }
        else if (choice == 8) {
            h = factorial(static_cast<int>(a));
        }
        else if (choice == 9) {
            return 0;
        }
        else {
            std::cout << "Неверная операция!" << std::endl;
            continue;
        }

        cout << "Ответ: " << h << endl;
    }
}
