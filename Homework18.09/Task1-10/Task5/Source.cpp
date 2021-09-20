#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a = n / 100;
	int k = ((n % 100) - (n % 10)) / 10;
	int c = n % 10;
	cout << a + k + c;
	return 0;
}
