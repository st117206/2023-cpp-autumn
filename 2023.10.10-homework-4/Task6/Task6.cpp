#include <iostream>

int main()
{
    int n = 0;
    int counter = 0;
    int max_el = 0;
    int max_el_number = 0;
    int min_el = 0;
    int min_el_number = 0;
    int element = 0;
    std::cin >> n;
    int* a = (int*)malloc(sizeof(int) * n);
    for (counter; counter < n; counter++)
    {
        std::cin >> *(a + counter);
    }
    min_el = *a;
    max_el = *a;
    counter = 0;
    for (counter; counter < n; counter++)
    {
        if (*(a + counter) < min_el)
        {
            min_el = *(a + counter);
            min_el_number = counter;
        }
    }
    counter = 0;
    for (counter; counter < n; counter++)
    {
        if (*(a + counter) >= max_el)
        {
            max_el = *(a + counter);
            max_el_number = counter;
        }
    }
    element = *(a + min_el_number);
    *(a + min_el_number) = *(a + max_el_number);
    *(a + max_el_number) = element;
    counter = 0;
    for (counter; counter < n; counter++)
    {
        std::cout << *(a + counter) << " ";
    }
}