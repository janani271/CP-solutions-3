#include<bits/stdc++.h>
using namespace std;
long long  i , j , n , l ;
double dist , maxi , en , begini ;
double a[1005];

int main()
{
	cin>>n>>l;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	sort(a,a+n);
	
	maxi = 0;
	if(n>=3)
	{
	for(i=0;i<n-1;i++)
	{
		dist = abs(a[i+1]-a[i])/2;
	//	cout<<dist<<"\n";
		if(dist>maxi)
			maxi=dist;
	}
	begini = a[0];
	//cout<<begini<<"\n";
	en = l-a[n-1];
	//cout<<en<<"\n";
	maxi = max(max(begini , en), maxi);
	}
	
	else
	{
		
		if(n==1)
		{
			maxi= max(a[0],l-a[0]);
		}
		
		else if(n==2)
		{
			maxi=max(max(a[0],l-a[1]),(a[1]-a[0])/2);	
			//cout<<maxi<<"\n";
		}
	}
		
	cout<<setprecision(15)<<maxi;
}
