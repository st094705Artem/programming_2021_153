#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a, b;
	cin >> a >> b;
	int k, l;
	k = a;
	l = b;
	a = l;
	b = k;
	cout << a << " " << b;

	return EXIT_SUCCESS;
}
