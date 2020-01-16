#include<bits/stdc++.h>
using namespace std;
string a , b;
unsigned int i;
int c;
int main()
{
	cin>>a;
	cin>>b;

	for(i=0;i<a.length();i++)
	{
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
	}

	c = a.compare(b);
	if(c==0)
		cout<<"0";
	else if(c<0)
		cout<<"-1";
	else
		cout<<"1";
	
	return 0;
}