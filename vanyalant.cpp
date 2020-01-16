#include<bits/stdc++.h>
using namespace std;
long long n , l , i , j , c=0;
long double low , mid , high , d ;
long long a[1007] , light[100000];
int main()
{
	cin>>n>>l;
	memset(light , 0 , 100000);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		light[a[i]]=1;
	}

	sort(a,a+n);
//	cout<<"heeheh";
	low=0;
	high=l;
	d = (low+high)/2;
	while(low<=high)
	{
		mid = (low+high)/2;
		cout<<mid<<"\n";
		c=0;
		for(i=0;i<=l;i+=mid)
		{
			if(i<=l-mid)
			{
			for(j=i;j<=i+mid;j++)
			{
				light[j]=1;
			}
		}
			if(i>=mid)
			{
			for(j=i;j>=i-mid;j--)
			{
				light[j]=1;
			}
		}
		}	

		for(i=0;i<=l;i++)
			c+=light[i];

		if(c>=l)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}

		if(d>mid)
			d=mid;
	}

	cout<<d;
}
