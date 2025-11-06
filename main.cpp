#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calc;
    double a, b;
    char operation;
    
    cout << "=== C++ Calculator ===" << endl;
    cout << "Введите выражение (например: 5 + 3): ";
    cin >> a >> operation >> b;
    
    double result;
    bool success = true;
    
    switch(operation) {
        case '+':
            result = calc.add(a, b);
            break;
        case '-':
            result = calc.subtract(a, b);
            break;
        case '*':
            result = calc.multiply(a, b);
            break;
        case '/':
            if(b != 0) {
                result = calc.divide(a, b);
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
                success = false;
            }
            break;
        default:
            cout << "Ошибка: неизвестная операция!" << endl;
            success = false;
    }
    
    if(success) {
        cout << "Результат: " << result << endl;
    }
    
    return 0;
}
