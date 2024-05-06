# include <iostream>
# include <typeinfo>

int main()
{
    char c = '\x01';
    short int p = 10;

    auto x = p +3;
    auto y = c +1;
    auto z=p+c;
    auto w= 3*p+5*c;

    std::cout << typeid(x).name() << " " << x << std::endl;
    std::cout << typeid(y).name() << " " << y << std::endl;
    std::cout << typeid(z).name() << " " << z << std::endl;
    std::cout << typeid(w).name() << " " << w << std::endl;
}