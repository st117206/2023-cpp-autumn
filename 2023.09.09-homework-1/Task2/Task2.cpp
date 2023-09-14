#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int x = N != 0;
	N = N + 1 - x;
    cout << ((1 + N) * (N * (1 - 2 * ((N - 1) / N)) + 2 * ((N - 1) / N))) / 2;
	return 0;
}