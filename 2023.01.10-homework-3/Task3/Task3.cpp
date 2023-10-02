#include <iostream>
#include <cmath>

int main()
{
    int x = 0;
    std::cin >> x;
    int number = 0;
    number = 1;
    int dividers_number = 0;
    for (number; number <= sqrt(x); number++)
    {
        if (x % number == 0)
        {
            dividers_number += 2;
        }
    }
    if (pow(number - 1, 2) == x)
    {
        dividers_number--;
    }
    std::cout << dividers_number;
}
