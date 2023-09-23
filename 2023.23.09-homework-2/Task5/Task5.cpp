#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    if (((n % 100) == 0) || (((n % 100) > 4) && ((n % 100) < 21)) || ((4 < (n % 10)) && ((n % 10) <= 9)))
    {
        std::cout << n << " bochek";
    }
    else if ((n % 10) == 1)
    {
        std::cout << n << " bochka";
    }
    else
    {
        std::cout << n << " bochki";
    }
    return 0;
}

