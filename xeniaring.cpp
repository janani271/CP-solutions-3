#include<bits/stdc++.h>
using namespace std;

long long n , m , i , a[100009] , c ; 
int main()
{
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}

	c=0;
	c+=(a[0]-1); // dist of first task from 1st house

	for(i=1;i<m;i++)
	{
		if(a[i]>=a[i-1])
		{
			c+=(a[i]-a[i-1]);
		}
		else
		{
			c += (n-a[i-1])+(a[i]);
		}
	}

	cout<<c;
	return 0;
}