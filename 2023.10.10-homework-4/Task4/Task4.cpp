#include <iostream>

int main()
{
    int n = 0;
    int counter = 0;
    int max_el = 0;
    std::cin >> n;
    int* a = (int*)malloc(sizeof(int) * n);
    for (counter; counter < n; counter++)
    {
        std::cin >> *(a + counter);
    }
    counter = 0;
    max_el = *a;
    for (counter; counter < n; counter++)
    {
        if (*(a + counter) > max_el)
        {
            max_el = *(a + counter);
        }
    }
    std::cout << max_el;
}