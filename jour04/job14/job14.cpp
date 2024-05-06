#include <iostream>

int main() {
    int x = 12;

    std::cout << "Valeur initiale de x : " << x << std::endl;
    int &ref_x = x;
    ref_x = 24;

    std::cout << "Nouvelle valeur de x : " << x << std::endl;

    return 0;
}
