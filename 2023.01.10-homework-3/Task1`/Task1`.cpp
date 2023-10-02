#include <iostream>

int main()
{
    int sec = 0;
    int seconds_passed = 0;
    int a = 0;
    int number = 0;
    std::cin >> sec;
    while (seconds_passed <= sec)
    {
        number++;
        a = number;
        for (a; a > 0; a--)
        {
            std::cout << number << " ";
            seconds_passed++;
            if (seconds_passed >= sec)
            {
                return 0;
            }
        }
    }
}
