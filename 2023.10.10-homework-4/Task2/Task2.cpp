#include <iostream>

int main()
{
    int n = 0;
    int counter = 0;
    std::cin >> n;
    int* a = (int*)malloc(sizeof(int) * n);
    for (counter; counter < n; counter++)
    {
        std::cin >> *(a + counter);
    }
    counter = 0;
    for (counter; counter < n; counter++)
    {
        if (counter % 2 == 0)
        {
            std::cout << *(a + counter) << " ";
        }
    }
}