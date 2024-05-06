# include <iostream>
int main()


{
    int a;
    int x = 5;
    int y = 3;
    a= x + 5;
    std::cout << a << std::endl;

    a = x = y +2;
    std::cout << a << std::endl;

    a = x==y;
    std::cout << a << std::endl;
    int b = 2;
    int c = 3;
    int d = 4;
    int j;
    j = a<b && c<d;
    std::cout << j << std::endl;

    int i = 2;
    int n = 2;
    int p = 3;
    int z;
    z = i++*(n+p);
    std::cout << z << std::endl;
    std::cout<<i<<std::endl;
}