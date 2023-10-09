#include <iostream>

int main()
{
    int n = 0;
    int positive = 0;
    std::cin >> n;
    int* a = (int*)malloc(sizeof(int) * n);
    for (int counter = 0; counter < n; counter++)
    {
        std::cin >> *(a + counter);
    }
    for (int counter = 0; counter < n; counter++)
    {
        if (*(a + counter) > 0)
        {
            positive++;
        }
    }
    std::cout << positive;
}