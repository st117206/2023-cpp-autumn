#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << i;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << (j + i) % (n + 1) + (j + i) / (n + 1);
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            std::cout << j + i - 1;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << std::max(std::min(n - i, i + 1), std::min(n - j, j + 1));
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << j * (i % 2) + (n - j + 1) * ((i + 1) % 2);
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}