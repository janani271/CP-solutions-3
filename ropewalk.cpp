#include<bits/stdc++.h>
using namespace std;
long long a[5] , d , s=0;
int main()
{
	cin>>a[0]>>a[1]>>a[2]>>d;
	sort(a,a+3);
	if(abs(a[1]-a[0])<d)
	{
		s = d - abs(a[1]-a[0]);
	}
	if(abs(a[2]-a[1])<d)
	{
		s += d - abs(a[2]-a[1]); 
	}
	cout<<s;
	return 0;
}