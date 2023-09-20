#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	int x = n != 0;
	n = n + 1 - x;
    std::cout << ((1 + n) * (n * (1 - 2 * ((n - 1) / n)) + 2 * ((n - 1) / n))) / 2;
	return 0;
}