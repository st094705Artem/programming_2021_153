#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int k = ((a*b) % 109 + 109) % 109;
	cout << k;
	return 0;
}
