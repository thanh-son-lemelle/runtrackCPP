#include <iostream>

int main() {
    
    int number = 2019;
    int *ptr = &number;
    std::cout << "La valeur de number pointé est : " << *ptr << std::endl;
}