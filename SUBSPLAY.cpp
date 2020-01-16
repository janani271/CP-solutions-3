#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t , n , i , nxt[100007] , k , l , r;
string s;
map<ll,ll>m;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		for(i=0;i<=25;i++)
			m[i]=-1;
		for(i=n-1;i>=0;i--)
		{
			nxt[i] = m[s[i]-'a'];
			m[s[i]-'a'] = i;
		}
		k=0;
		for(i=0;i<n;i++)
		{
			if(nxt[i]!=-1)
			{
				l = i;
				r = nxt[i];
				// cout<<s[i]<<"\tl : "<<l<<"\tr: "<<r<<"\tn: "<<n<<"\n";
				// cout<<n-(r-l)<<"\n";
				k = max(k,n-(r-l));
			}
		}
		cout<<k<<"\n";
	}
	return 0;
}