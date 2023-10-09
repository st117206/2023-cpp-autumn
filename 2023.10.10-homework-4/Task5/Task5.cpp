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
    counter = n - 1;
    for (counter; counter >= 0; counter--)
    {
            std::cout << *(a + counter) << " ";
    }
}