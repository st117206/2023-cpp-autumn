#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    while ((a > b) || (b > c))
    {
        if (a > b)
        {
            d = b;
            b = a;
            a = d;
        }
        if (b > c)
        {
            d = c;
            c = b;
            b = d;
        }
    }
    std::cout << a << " " << b << " " << c;
    return 0;
}