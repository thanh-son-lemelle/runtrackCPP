#include <iostream>

int main() {
    
    std::cout << "Table de multiplication de 1 à 10 :" << std::endl;
    std::cout << "  |";
    for (int j = 1; j <= 10; ++j) {
        std::cout << "\t" << j;
    }
    std::cout << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " |";
        for (int j = 1; j <= 10; ++j) {
            std::cout << "\t" << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}