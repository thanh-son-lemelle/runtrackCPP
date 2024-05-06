#include <iostream>

int main() {
    int i, n, som(0);
    for (i = 0 ; i<4; i++) {
        std:: cout << "Donnez un entier : ";
        std::cin >> n;
        som += n;
    }
    std::cout << "La somme est : " << som << std::endl;
    return 0;
}

#include <iostream>

int main() {
    int i = 0, n, som = 0;
    
    while (i < 4) {
        std::cout << "Donnez un entier : ";
        std::cin >> n;
        som += n;
        i++;
    }

    std::cout << "La somme est : " << som << std::endl;
    return 0;
}
