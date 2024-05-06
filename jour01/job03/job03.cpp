#include <iostream>

int main() {
    int n;

    std::cout << "Entrez le nombre d'execution" << std::endl;
    std::cin >> n;
    int répétition = n;
    while (n != 0)
    {
        std::cout << "Hello, World!" << std::endl;
        n--;

    }
    
    std::cout << "fin du programme après "<<répétition<< " répétition" << std::endl;
    return 0;
}