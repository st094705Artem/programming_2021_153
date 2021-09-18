#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int k, l;
	k = a;
	l = b;
	a = l;
	b = k;
	cout << a << " " << b;
	
	return 0;
}