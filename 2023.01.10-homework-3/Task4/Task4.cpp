﻿#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int x = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    for (x; x <= 1000; x++)
    {
        if (a * x * x * x + b * x * x + c * x + d == 0)
        {
            std::cout << x << " ";
        }
    }
}
