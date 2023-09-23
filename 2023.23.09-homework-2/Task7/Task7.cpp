#include <iostream>

int main()
{
    int x = 0;
    std::cin >> x;
    int hundred = 0;
    int fifty = 0;
    int ten = 0;

    if (x / 10 == 4)
    {
        std::cout << "XL";
        x = x % 10;
    }
    else if (x / 10 == 9)
    {
        std::cout << "XC";
        x = x % 10;
    }
    else
    {
        hundred = x / 100;
        x = x % 100;
        fifty = x / 50;
        x = x % 50;
        ten = x / 10;
        x = x % 10;

        while (hundred > 0)
        {
            std::cout << "C";
            hundred--;
        }
        while (fifty > 0)
        {
            std::cout << "L";
            fifty--;
        }
        while (ten > 0)
        {
            std::cout << "X";
            ten--;
        }
    }

    switch (x)
    {
    case 1: 
        std::cout << "I";
        break;
    case 2: 
        std::cout << "II";
        break;
    case 3: 
        std::cout << "III";
        break;
    case 4: 
        std::cout << "IV";
        break;
    case 5: 
        std::cout << "V";
        break;
    case 6: 
        std::cout << "VI";
        break;
    case 7: 
        std::cout << "VII";
        break;
    case 8: 
        std::cout << "VIII";
        break;
    case 9: 
        std::cout << "IX";
    }
}
