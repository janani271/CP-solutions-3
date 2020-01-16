#include<bits/stdc++.h>
using namespace std;
long long t , n , b , maxarea , i;
long long w[10000] , h[10000] , p[10000];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>b;
		maxarea=0;
		for(i=0;i<n;i++)
		{
			w[i]=0;h[i]=0;p[i]=0;
			cin>>w[i]>>h[i]>>p[i];
			if((w[i]*h[i]>maxarea)&&p[i]<=b)
				maxarea = w[i]*h[i];
		}
		if(maxarea==0)
			cout<<"no tablet"<<"\n";
		else
			cout<<maxarea<<"\n"; 
	}
}
