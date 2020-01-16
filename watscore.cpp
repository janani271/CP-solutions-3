#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t , n , p[20] , res , i , x , y;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		memset(p,0,sizeof(p));
		res=0;
		for(i=0;i<n;i++)
		{
			cin>>x>>y;
			p[x] = max(p[x],y);
		}
		for(i=1;i<=8;i++)
			res += p[i];
		cout<<res<<"\n";
	}
	return 0;
}