#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long C;
	cin >> C;
	long long m;
	cin >> m;
	for(long long i = 0;i<m;i++)
	{
		long long p;
		cin >> p;
		if(C % p == 0)
		{
		
			if(p<C/p)
				cout << p << " " << C/p << endl;
			else
				cout << C/p << " " << p << endl;
			break;
		}
	}
	
	return 0;
	
}
