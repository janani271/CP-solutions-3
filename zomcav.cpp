#include<bits/stdc++.h>
using namespace std;

long long t , n , c[100008],h[100009],inc[100006],i,lpos,rpos;
bool flag;
unordered_map<long long,long long>m;
void compute_increase()
{
	for(i=1;i<=n;i++)
	{
		lpos = max((i-c[i]),(long long)1);
		rpos = min(i+c[i],n);
		inc[lpos]+=1;
		inc[rpos+1] -= 1;
	}
	for(i=2;i<=n;i++)
	{
		inc[i] += inc[i-1];
		m[inc[i]]++;
	}
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
			cin>>c[i];
		for(i=1;i<=n;i++)
			cin>>h[i];
		memset(inc,0,sizeof(inc));
		compute_increase();
		// for(i=1;i<=n;i++)
		// 	cout<<inc[i]<<"\t";
		for(i=1;i<=n;i++)
		{
			m[h[i]]--;
			//cout<<h[i]<<" : "<<m[h[i]];
		}
		//cout<<endl;
		flag=true;
		for(auto it : m)
		{
			if(it.second>0)
			{
				flag=false;
				break;
			}
		}
		m.clear();
		if(flag)
			cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
	return 0;
}