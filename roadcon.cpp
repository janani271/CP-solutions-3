#include<bits/stdc++.h>
using namespace std;
long long n , m , i , not_con[1009] , a , b , flag , pos ;
int main()
{
	cin>>n>>m;

	for(i=1;i<=n;i++)
	{
		not_con[i]=1;
	}

	for(i=1;i<=m;i++)
	{
		cin>>a>>b;
		not_con[a]=0;
		not_con[b]=0;
	}

	flag=0;
	for(i=1;i<=n;i++)
	{
		if(not_con[i]==1)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag)
	{
		cout<<n-1<<"\n";
		for(i=1;i<=n;i++)
		{
			if(i!=pos)
				cout<<i<<" "<<pos<<"\n";
		}
	}
	return 0;
}