#include<bits/stdc++.h>
using namespace std;
string a , b;
long long n , i , a_count , b_count; 
int main()
{
	cin>>a>>b;
	if(a.size()!=b.size())
		cout<<"NO";
	else
	{
		n = a.size();
		for(i=0;i<n;i++)
		{
			if(a[i]=='0')
				a_count++;
		}

		for(i=0;i<n;i++)
		{
			if(b[i]=='0')
				b_count++;
		}

		if(a_count!=b_count && (a_count==n || b_count==n))
		{
			cout<<"NO";
		}
		else
			cout<<"YES";
	}
	return 0;
}