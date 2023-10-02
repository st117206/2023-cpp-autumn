#include <iostream>
#include <cmath>

int main()
{
    int k = 0;
    int number = 0;
    int palindromes = 0;
    int reversed_number = 0;
    std::cin >> k;
    
    for (k; k > 0; k--)
    {
        number = k;
        reversed_number = 0;
        while (number > 0)
        {
            reversed_number = reversed_number * 10 + number % 10;
            number /= 10;
        }
        if (reversed_number == k)
        {
            palindromes++;
        }
    }

    std::cout << palindromes;
}
