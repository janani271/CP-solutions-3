#include<bits/stdc++.h>
using namespace std;
#define SIZE 100009

long long n ,  m , i , visited[SIZE] ,c[SIZE] , a[SIZE] , l[SIZE]; 

int main()
{
	cin>>n>>m;

	for(i=1;i<=SIZE;i++)
	{
		visited[i]=0;
	}

	c[n+1]=0;

	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}

	for(i=n;i>=1;i--)
	{
		if(visited[a[i]]==0)
		{
			visited[a[i]]=1;
			c[i]=(c[i+1]+1);
		}
		else
		{
			c[i]=c[i+1];
		}
	}

	for(i=1;i<=m;i++)
	{
		cin>>l[i];
	}

	for(i=1;i<=m;i++)
	{
		cout<<c[l[i]]<<"\n";
	}

	return 0;
}