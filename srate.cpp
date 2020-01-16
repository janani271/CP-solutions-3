#include<bits/stdc++.h>
using namespace std;
long long r , b, ball , s , i ; 
int main()
{
	cin>>r>>b>>s;
	if((r*100)/b>=s)
	{
		cout<<"0"<<endl;
		return 0;
	}
	ball = b;
	for(i=1;i<=200-ball;i++)
	{
		r += 6;
		b++;
		if((r*100)/b>=s)
		{
			cout<<i<<endl;
			return 0;
		} 
	}
	cout<<"-1"<<endl;
	return 0;
}