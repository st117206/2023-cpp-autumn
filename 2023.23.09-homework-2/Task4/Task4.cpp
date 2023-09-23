#include <iostream>

int main()
{
    int n = 0;
    int one = 0;
    int five = 0;
    int ten = 0;
    int twenty = 0;
    int sixty = 0;
    std::cin >> n;

    sixty = n / 60;
    n = n % 60;
    twenty = n / 20;
    n = n % 20;
    ten = n / 10;
    n = n % 10;
    five = n / 5;
    n = n % 5;
    one = n;

    if (15 * one + 70 * five > 125 * ((one + five * 5) / 10) + 125)
    {
        one = 0;
        five = 0;
        ten++;
    }
    if (15 * one + 70 * five + 125 * ten > 230 * ((one + five * 5 + ten * 10) / 20) + 230)
    {
        one = 0;
        five = 0;
        ten = 0;
        twenty++;
    }
    if (15 * one + 70 * five + 125 * ten + 230 * twenty > 440 * ((one + five * 5 + ten * 10 + twenty * 20) / 60) + 440)
    {
        one = 0;
        five = 0;
        ten = 0;
        twenty = 0;
        sixty++;
    }
    

    std::cout << one << " ";
    std::cout << five << " ";
    std::cout << ten << " ";
    std::cout << twenty << " ";
    std::cout << sixty;
    return 0;
}
