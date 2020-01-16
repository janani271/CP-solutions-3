#include<bits/stdc++.h>
using namespace std;

long long ch[105][105],i,j,t,n,k,ans,a[100];


long long choose (long long a, long long b)
{
	if(ch[a][b]!=-1)
		return ch[a][b];
	if(a<b) 
		return ch[a][b] = 0;
	if(a==b) 
		return ch[a][b] = 1;
	if(b==1)
		return ch[a][b]=a;
	return ch[a][b] = choose(a-1,b-1) + choose(a-1,b);
}

int main()
{
	cin>>t;
	for(i=0;i<105;i++)
	{
		for(j=0;j<105;j++)
			ch[i][j]=-1;
	}
	while(t--)
	{
		cin>>n>>k;
		ans=1;
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		
		unordered_map<long long, long long>m;
		unordered_map<long long, long long>c;
		
		for(i=0;i<n;i++)
		{
			m[a[i]]++;
		}
		for(i=0;i<k;i++)
		{
			c[a[i]]++;
		}
		for(auto it=c.begin();it!=c.end();++it)
		{
			//cout<<"element: "<<it->first<<"\tneeded: "<<it->second<<"\tavailable: "<<m[it->first]<<"\n";
			ans *= choose(m[it->first],it->second);
		}

		cout<<ans<<"\n";
	}
	return 0;
}