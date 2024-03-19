#include <iostream>
#include "Calculator.h"

int main()
{
    Calculator* calc_ptr = new Calculator;
    int* option_ptr = new int;
    int* x_ptr = new int;
    int* y_ptr = new int;
    std::cout << "Add (1) Subtract(2) Multiply(3) Divide(4)" << std::endl;
    std::cin >> *option_ptr;
    std::cout << "what is the first number?" << std::endl;
    std::cin >> *x_ptr;
    std::cout << "what is the second number?" << std::endl;
    std::cin >> *y_ptr;
    if (*option_ptr == 1) {
        std::cout << "The sum is " << calc_ptr->addNumber(*x_ptr, *y_ptr) << std::endl;
    }
    else if (*option_ptr == 2) {
        std::cout << "The difference is " << calc_ptr->addNumber(*x_ptr, *y_ptr) << std::endl;
    }
    else if (*option_ptr == 3) {
        std::cout << "The product is " << calc_ptr->multiplyNumber(*x_ptr, *y_ptr) << std::endl;
    }
    else if (*option_ptr == 4) {
        std::cout << "The quotient is " << calc_ptr->divideNumber(*x_ptr, *y_ptr) << std::endl;
    }
    delete x_ptr, y_ptr, option_ptr, calc_ptr;
    std::cout << "Press any key to exit the console...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}


