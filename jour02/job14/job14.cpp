#include <iostream>
#include <string>
#include <vector>

bool estPalindrome(const std::string& str) {
    int debut = 0;
    int fin = str.length() - 1;
    while (debut < fin) {
        if (str[debut] != str[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    std::vector<std::string> tab = {"radar", "hello", "lvel", "stats", "world"};
    std::cout << "Palindromes trouves dans le tableau :" << std::endl;
    for (const std::string& str : tab) {
        if (estPalindrome(str)) {
            std::cout << str << std::endl;
        }
    }
    return 0;
}
