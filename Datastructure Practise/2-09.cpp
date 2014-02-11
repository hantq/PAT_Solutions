#include <iostream>
using namespace std;

const int MAX_SIZE = 1001;
int capacity[MAX_SIZE];
int goods[MAX_SIZE];

int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i)
		capacity[i] = 100;
	for(int i = 1; i <= n; ++i)
		cin >> goods[i];
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= n; ++j)
		{
			if(capacity[j] >= goods[i])
			{
				cout << goods[i] << " " << j << endl;
				capacity[j] -= goods[i];
				break;
			}
		}
	int cnt = 0;
	for(int i = 1; i <= n; ++i)
		if(capacity[i] < 100)
			++cnt;
	cout << cnt << endl;
	return 0;
}
