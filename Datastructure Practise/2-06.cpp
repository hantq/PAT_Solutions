#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100010;
int a[MAX_SIZE];

int main()
{
	int i, b, n;
	cin >> b >> n;
	for(i = 1; i <= n; ++i)
		a[i] = (n - i + 1) * b;
	for(i = 1; i <= n; ++i)
	{
		a[i+1] += a[i] / 10;
		a[i] %= 10;
	}
	for(i = MAX_SIZE; (i >= 0) && (a[i] == 0); --i);
	if(i < 0)
	{
		cout << 0 << endl;
		return 0;
	}
	for(; i >= 1; --i)
		cout << a[i];
	cout << endl;
	return 0;
}
