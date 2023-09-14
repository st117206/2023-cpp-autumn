#include <iostream>

using namespace std;

int main()
{
	long long  A;
	cin >> A;
	cout << ((A / 10) * (A / 10 + 1)) * 100 + 25;
	return 0;
}