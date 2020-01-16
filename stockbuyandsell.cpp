#include<bits/stdc++.h>
using namespace std;
long long t , n , i , mini, maxi , a[10009] ; 
vector<pair<long long , long long>> v;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		mini=0; maxi=0; i=1;
		while(i<=n)
		{
			if(a[i]<a[mini] || a[i]<a[maxi])
			{
				if(mini!=maxi)
					v.push_back(make_pair(mini,maxi));
				mini = i ; maxi = i;
				//cout<<"\nmini : "<<mini<<"\tmaxi: "<<maxi<<endl;
			}
			else if(a[i]>=a[maxi])
			{
				maxi = i;
			}
			i++;
		}
		for(auto it=v.begin();it!=v.end();++it)
		{
			cout<<"("<<it->first<<" "<<it->second<<") ";
		}
		cout<<endl;
		v.clear();
	}
	return 0;
}
