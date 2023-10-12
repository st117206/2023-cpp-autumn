#include <iostream>

int main()
{
    int n = 0;
    int bit_sum = 0;
    std::cin >> n;

    for (int i = 0; i < 32; i++)
    {
        if ((n >> (31 - i) & 1) == 1)
        {
            bit_sum++;
        }
    }

    std::cout << bit_sum;
}