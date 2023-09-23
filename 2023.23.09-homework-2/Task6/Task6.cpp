#include <iostream>

int main()
{
    int k = 0;
    int m = 0;
    int n = 0;
    std::cin >> k;
    std::cin >> m;
    std::cin >> n;

    if (n <= k)
    {
        std::cout << 2 * m;
    }
    else if (n * 2 % k == 0)
    {
        std::cout << (n * 2 / k) * m;
    }
    else
    {
        std::cout << ((n * 2 / k) + 1) * m;
    }
}
