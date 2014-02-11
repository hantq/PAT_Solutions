#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;

const int MAX_SIZE = 10000;
double a[MAX_SIZE];

int main()
{
	int n;
	cin >> n;
	double avg = 0.0;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
		avg += a[i];
	}
	avg /= n;
	double ans = 0.0;
	for(int i = 0; i < n; ++i)
		ans += (a[i] - avg) * (a[i] - avg);
	ans /= n;
	ans = sqrt(ans);
	cout << setiosflags(ios::fixed) << setprecision(5) << ans << endl;
	return 0;
}
