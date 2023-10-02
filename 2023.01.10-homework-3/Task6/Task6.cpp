#include <iostream>

int main()
{
    int n = 0;
    int number = 0;
    int number_1 = 0;
    int number_2 = 1;
    std::cin >> n;
    for (int counter = 2; counter <= n; counter++)
    {
        number = number_1 + number_2;
        number_1 = number_2;
        number_2 = number;
    }
    std::cout << number_2;
}
