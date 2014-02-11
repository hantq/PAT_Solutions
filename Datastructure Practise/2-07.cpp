#include <iostream>
using namespace std;

int main()
{
	long int n;
	cin >> n;
	if(n == 1)
	{
		cout << "1=1" << endl;
		return 0;
	}
	cout << n << "=";
	bool flg = false;
	for(int i = 2; i <= n; ++i)
	{
		int cnt = 0;
		while(n % i == 0)
		{
			++cnt;
			n /= i;
		}
		if(cnt)
		{
			if(flg)
				cout << "*";
			else
				flg = true;
			if(cnt == 1)
				cout << i;
			else
				cout << i << "^" << cnt;
		}
	}
	cout << endl;
	return 0;
}
