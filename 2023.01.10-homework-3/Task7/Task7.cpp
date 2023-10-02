#include <iostream>

int main()
{
    int n = 0;
    int k = -1;
    int power = 0;
    int number = 0;
    std::cin >> n;
    while (true)
    {
        k++;
        power = 1;
        number = 1;
        for (power; power <= k; power++)
        {
            number *= 2;
        }
        if (number >= n)
        {
            break;
        }
    }
    std::cout << k;
}
