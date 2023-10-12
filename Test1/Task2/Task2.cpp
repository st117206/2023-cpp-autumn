#include <iostream>

int main()
{
    int n = 0;

    std::cin >> n;
    for (int i = 0; i <= n; i++)
    {
        std::cout << i << " ";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << i << " ";
    }
}