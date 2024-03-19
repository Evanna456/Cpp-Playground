#include <iostream>

int main()
{
    int favorite_number;
    std::cout << "what is your favorite number? \n";
    std::cin >> favorite_number;
    std::cout << "amazing! " << favorite_number <<" is my favorite number too \n";
    std::cout << "Press any key to exit the console...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}
