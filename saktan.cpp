#include<bits/stdc++.h>
using namespace std;
long long n , m , q , t , ans , i , even_r, even_c, odd_c, odd_r, rows[300005], cols[300005],x,y;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>q;
		memset(rows,0,sizeof(rows));
		memset(cols,0,sizeof(cols));
		even_c=0; even_r=0; odd_c=0; odd_r=0;
		for(i=0;i<q;i++)
		{
			cin>>x>>y;
			rows[x]++;
			cols[y]++;
		}
		for(i=1;i<=n;i++)
		{
			if(rows[i]&1)
				odd_r++;
			else even_r++;
		}
		for(i=1;i<=m;i++)
		{
			if(cols[i]&1)
				odd_c++;
			else even_c++;
		}
		ans = (even_c*odd_r) + (odd_c*even_r);
		cout<<ans<<"\n";
	}
	return 0;
}