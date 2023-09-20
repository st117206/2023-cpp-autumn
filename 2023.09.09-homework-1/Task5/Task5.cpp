#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;
    std::cout << (a * b % 109 + 109) % 109 + 1 << std::endl;
    return 0;
}
