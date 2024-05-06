#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    switch (n) {
        case 0 :
            std::cout << "Null\n";
            break;
        case 1 :
        case 2 :
            std::cout << "Petit\n";
            break;
        case 3 :
        case 4 :
        case 5 :
            std::cout << "Moyen\n";
            break;
        default:
            std::cout << "Grand\n";
            break;
    }
    
    return 0;
}
// pour n = 0 : Null
// n=1 : Petit
//n=4 : Moyen 
//n=10 : Grand
//n=-5 : Grand