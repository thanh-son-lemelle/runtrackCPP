#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string phrase = "vive la plateforme !";

    phrase.erase(std::remove_if(phrase.begin(), phrase.end(), [](char c) {
        return std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u' || std::tolower(c) == 'y';
    }), phrase.end());

    std::cout << phrase << std::endl;

    return 0;
}
