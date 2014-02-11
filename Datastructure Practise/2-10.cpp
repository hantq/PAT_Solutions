/*
 上面的问题可以很简单的用递归来解决，如果只需要求第一个人的钻石数目，从以下的分配方案中可以发现有更简单的规律：第一个人的钻石数目是：D - P/2 - 1（其中D是钻石总数目，除法向下取整，P = 3时特别考虑）
P=3: D-1 1 0
P=4: D-3 0 2 1
P=5: D-3 0 1 0 2
P=6: D-4 0 1 2 1 0	
P=7: D-4 0 1 2 0 0 1
http://zhidao.baidu.com/question/44007739.html
 */
#include <iostream>
using namespace std;

int main()
{
	int p, d, ans;
	cin >> d >> p;
	if(p == 3)
		ans = d - 1;
	else
		ans = d - 1 - p / 2;
	cout << ans << endl;
	return 0;
}
