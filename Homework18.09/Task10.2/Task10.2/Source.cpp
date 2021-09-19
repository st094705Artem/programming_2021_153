#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a>>b;
	int k = a / b;
	int l = b / a;
	int c = k + l;
	cout << (k*a + l * b) /( c);
	return 0;
}