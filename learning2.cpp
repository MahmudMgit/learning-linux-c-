#include <iostream>
#include <cmath>

int main() {

    char op;
    
    double num1;
    double num2;
    
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter num1: \n";
    std::cin >> num1;

    std::cout << "Enter num2: \n";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        std::cout << num1 + num2 << '\n';
        break;

    case '-':
        std::cout << num1 - num2 << '\n';
        break;

    case '*':
        std::cout << num1 * num2 << '\n';
        break;

    case '/':
        std::cout << num1 / num2 << '\n';
        break;
    
    default:
        std::cout << "PLease enter a valid operator\n";
        break;
    }


    return 0;

}

