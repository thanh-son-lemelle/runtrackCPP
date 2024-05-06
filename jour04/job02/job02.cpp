#include <iostream>

int main() {

    int number = 2019;
    int number2 = 2020;

    std::cout << "Swap two numbers using pointers" << std::endl;
    std::cout << " number = " << number << std::endl;
    std::cout << " number2 = " << number2 << std::endl;

    int *ptr = &number;
    int *ptr2 = &number2;

    number = *ptr2;
    number2 = *ptr;

    std::cout << "After swapping" << std::endl;
    std::cout << " number = " << number << std::endl;
    std::cout << " number2 = " << number2 << std::endl;

    std::cout << "La valeur de number pointé est : " << *ptr << std::endl;
}