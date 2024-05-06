#include <iostream>

int main() {
    int n;
    do {
        std::cout << "Donnez un nombre > 0 : ";
    } while ((std::cin >> n) && n <= 0);

    std::cout << "Vous avez saisi : " << n << std::endl;

    return 0;
}