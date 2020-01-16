#include<bits/stdc++.h>
using namespace std;

int p[1000], t , n , c , mini;

int check_min(int l,int r)
{
	int x = p[l];
	for(int i=l+1;i<r;i++)
	{
		if(p[i]<x)
			x = p[i];
	}
	return x;
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		c=0;
		mini = 1000;
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
			if(i<5 && p[i]<mini)
			{
				mini = p[i];
				//cout<<"mini : "<<mini<<"\n";
				c++; 
			}
			else if(check_min(i-5,i)>p[i])
				c++;
			//cout<<"hellwolo "<<c<<"\n";
		}
		cout<<c<<"\n";
	}
	return 0;
}