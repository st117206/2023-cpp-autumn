#include <iostream>

int main()
{
    unsigned short a = 0;
    std::cin >> a;

    unsigned short b = 0;
    std::cin >> b;

    unsigned short sum = 0;
    bool up = 0;

    for (int i = 0; i < 16; i++)
    {
        bool bita = ((a >> i) & 1);
        bool bitb = ((b >> i) & 1);
        bool current = bita ^ bitb ^ up;
        up = (bita & bitb) | (bita & up) | (bitb & up);
        sum = sum | ((int)current << i);
    }

    std::cout << sum;
}