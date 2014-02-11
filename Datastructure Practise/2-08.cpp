#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const char op[4] = {'+', '-', '*', '/'};

int main()
{
	int a[4];
	for(int i = 0; i < 4; ++i)
		cin >> a[i];
	sort(a, a+4);
	do
	{
		// there are 64 permutations of the three signs
		for(int i = 0; i < 64; ++i)
		{
			char ops[3];
			ops[0] = op[i/16];
			ops[1] = op[(i%16)/4];
			ops[2] = op[i%4];
			double ans;
			/*
			 * there are five different ways:
			 * a(b(cd)), a((bc)d), (ab)(cd), (a(bc))d, ((ab)c)d
			 */
			switch(ops[2])
			{
				case '+':
					ans = a[2] + a[3];
					break;
				case '-':
					ans = a[2] - a[3];
					break;
				case '*':
					ans = a[2] * a[3];
					break;
				case '/':
					ans = (a[2] * 1.0) / a[3];
					break;
				default: break;
			}
			switch(ops[1])
			{
				case '+':
					ans = a[1] + ans;
					break;
				case '-':
					ans = a[1] - ans;
					break;
				case '*':
					ans = a[1] * ans;
					break;
				case '/':
					ans = (a[1] * 1.0) / ans;
					break;
				default: break;
			}
			switch(ops[0])
			{
				case '+':
					ans = a[0] + ans;
					break;
				case '-':
					ans = a[0] - ans;
					break;
				case '*':
					ans = a[0] * ans;
					break;
				case '/':
					ans = (a[0] * 1.0) / ans;
					break;
				default: break;
			}
			if(ans == 24)
			{	
				cout << a[0] << ops[0] << "(" << a[1] << ops[1] << "(" << a[2] << ops[2] << a[3] << "))" << endl;
				return 0;
			}

			switch(ops[1])
			{
				case '+':
					ans = a[1] + a[2];
					break;
				case '-':
					ans = a[1] - a[2];
					break;
				case '*':
					ans = a[1] * a[2];
					break;
				case '/':
					ans = (a[1] * 1.0) / a[2];
					break;
				default: break;
			}
			switch(ops[2])
			{
				case '+':
					ans = ans + a[3];
					break;
				case '-':
					ans = ans - a[3];
					break;
				case '*':
					ans = ans * a[3];
					break;
				case '/':
					ans = (ans * 1.0) / a[3];
					break;
				default: break;
			}
			switch(ops[0])
			{
				case '+':
					ans = a[0] + ans;
					break;
				case '-':
					ans = a[0] - ans;
					break;
				case '*':
					ans = a[0] * ans;
					break;
				case '/':
					ans = (a[0] * 1.0) / ans;
					break;
				default: break;
			}
			if(ans == 24)
			{	
				cout << a[0] << ops[0] << "((" << a[1] << ops[1] << a[2] << ")" << ops[2] << a[3] << ")" << endl;
				return 0;
			}

			switch(ops[0])
			{
				case '+':
					ans = a[0] + a[1];
					break;
				case '-':
					ans = a[0] - a[1];
					break;
				case '*':
					ans = a[0] * a[1];
					break;
				case '/':
					ans = (a[0] * 1.0) / a[1];
					break;
				default: break;
			}
			double tmp;
			switch(ops[2])
			{
				case '+':
					tmp = a[2] + a[3];
					break;
				case '-':
					tmp = a[2] - a[3];
					break;
				case '*':
					tmp = a[2] * a[3];
					break;
				case '/':
					tmp = (a[2] * 1.0) / a[3];
					break;
				default: break;
			}
			switch(ops[1])
			{
				case '+':
					ans = ans + tmp;
					break;
				case '-':
					ans = ans - tmp;
					break;
				case '*':
					ans = ans * tmp;
					break;
				case '/':
					ans = (ans * 1.0) / tmp;
					break;
				default: break;
			}
			if(ans == 24)
			{	
				cout << "(" << a[0] << ops[0] << a[1] << ")" << ops[1] << "(" << a[2] << ops[2] << a[3] << ")" << endl;
				return 0;
			}

			switch(ops[1])
			{
				case '+':
					ans = a[1] + a[2];
					break;
				case '-':
					ans = a[1] - a[2];
					break;
				case '*':
					ans = a[1] * a[2];
					break;
				case '/':
					ans = (a[1] * 1.0) / a[2];
					break;
				default: break;
			}
			switch(ops[0])
			{
				case '+':
					ans = a[0] + ans;
					break;
				case '-':
					ans = a[0] - ans;
					break;
				case '*':
					ans = a[0] * ans;
					break;
				case '/':
					ans = (a[0] * 1.0) / ans;
					break;
				default: break;
			}
			switch(ops[2])
			{
				case '+':
					ans = ans + a[3];
					break;
				case '-':
					ans = ans - a[3];
					break;
				case '*':
					ans = ans * a[3];
					break;
				case '/':
					ans = (ans * 1.0) / a[3];
					break;
				default: break;
			}
			if(ans == 24)
			{	
				cout << "(" << a[0] << ops[0] << "(" << a[1] << ops[1] << a[2] << "))" << ops[2] << a[3] << endl;
				return 0;
			}
			
			switch(ops[0])
			{
				case '+':
					ans = a[0] + a[1];
					break;
				case '-':
					ans = a[0] - a[1];
					break;
				case '*':
					ans = a[0] * a[1];
					break;
				case '/':
					ans = (a[0] * 1.0) / a[1];
					break;
				default: break;
			}
			switch(ops[1])
			{
				case '+':
					ans = ans + a[2];
					break;
				case '-':
					ans = ans - a[2];
					break;
				case '*':
					ans = ans * a[2];
					break;
				case '/':
					ans = (ans * 1.0) / a[2];
					break;
				default: break;
			}
			switch(ops[2])
			{
				case '+':
					ans = ans + a[3];
					break;
				case '-':
					ans = ans - a[3];
					break;
				case '*':
					ans = ans * a[3];
					break;
				case '/':
					ans = (ans * 1.0) / a[3];
					break;
				default: break;
			}
			if(ans == 24)
			{	
				cout << "((" << a[0] << ops[0] << a[1] << ")" << ops[1] << a[2] << ")" << ops[2] << a[3] << endl;
				return 0;
			}
		}
	} while(next_permutation(a, a+4));
	cout << "-1" << endl;
	return 0;
}
