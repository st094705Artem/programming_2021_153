#include <iostream>

using namespace std;

int main()
{
	int h,a,b;
	cin >> h >> a >> b;
	int k =( (h - a + a - b - 1) / (a - b)) + 1;
	cout << k;
 	return 0;
}