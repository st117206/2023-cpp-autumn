﻿#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;
    int c = a > b;
    int d = a <= b;
    std::cout << a * c + b * d << std::endl;
    return 0;
}
