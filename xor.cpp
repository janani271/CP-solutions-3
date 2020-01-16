#include<bits/stdc++.h>
using namespace std;

string c , a ,b;

int main()
{	
	string::iterator ita, itb;
	cin>>a>>b;
	for(ita=a.begin(),itb=b.begin();ita!=a.end(),itb!=b.end();ita++,itb++)
	{
		if(*ita == *itb)
			c.push_back('0');
		else
			c.push_back('1');
	}

	cout<<c;
	
	return 0;
}