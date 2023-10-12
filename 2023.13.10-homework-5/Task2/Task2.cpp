#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    std::cout << "0b ";
    for (int i = 31; i >= 0; i--)
    {
        std::cout << ((n >> i) & 1);
        if (i % 4 == 0)
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;


    int last_bit = 0;
    for (int i = 0; i <= 31; i++)
    {
        if ((n >> i & 1) == 1)
        {
            last_bit = i;
            break;
        }
    }

    int first_bit = 31;
    for (int i = 31; i >= 0; i--)
    {
        if ((n >> i & 1) == 1)
        {
            first_bit = i;
            break;
        }
    }

    last_bit++;
    first_bit--;

    int mask = 0;
    for (int i = last_bit; i <= first_bit; i++)
    {
        mask = mask | (1 << i);
    }

    n = n ^ mask;

    std::cout << "0b ";
    for (int i = 31; i >= 0; i--)
    {
        std::cout << ((n >> i) & 1);
        if (i % 4 == 0)
        {
            std::cout << " ";
        }
    }
}