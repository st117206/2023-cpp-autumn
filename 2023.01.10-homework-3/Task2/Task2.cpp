#include <iostream>

int main()
{
    int x = 0;
    bool first_digit = true;
    std::cin >> x;
    while ((x % 10 > 0) || (x / 10 > 0))
    {
        if ((x % 10 == 0) && first_digit)
        {

        }
        else
        {
            std::cout << x % 10;
            first_digit = false;
        }
        x = x / 10;
    }
}
