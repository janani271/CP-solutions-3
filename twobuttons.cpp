#include<bits/stdc++.h>
using namespace std;
long long n , m , c;
int main()
{
	cin>>n>>m;
	if(n>m)
		cout<<n-m;
	else if(n==m)
		cout<<"0";
	else
	{
		c=0;
		while(m>n)
		{
			m%2==0?m/=2:m+=1;
			c++;
			if(m==n)
				break;
		}
		cout<<c + (n-m);
	}
}