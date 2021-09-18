#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int t = x * x;
	cout << t * t + t * x + t + x + 1;
	return 0;
}