#include<bits/stdc++.h>
using  namespace std;
long long n , i , a[10000009] , d[10000009];
int main()
{
	cin>>n;
	d[1] = 0;
	a[1] = 1;

	for(i=2;i<=n;i++)
	{
		d[i] = (3*a[i-1]) % 1000000007;
		a[i] = (2*a[i-1] + d[i-1]) % 1000000007 ;
	}

	cout<<d[n];

	return 0;
}