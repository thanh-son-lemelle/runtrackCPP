#include <iostream>
#include <string>
#include <cctype> 

int main() {
    std::string phrase = "vive la plateforme !";

    for (char &c : phrase) {
        c = std::toupper(c);
    }

    std::cout << phrase << std::endl;

    return 0;
}
