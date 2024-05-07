#include <iostream>

int main() {
    
    int tableau[] = {1, 2, 3, 4, 5};

    for (int &element : tableau) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
