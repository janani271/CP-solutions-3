#include<bits/stdc++.h>
using namespace std;

int x , y , x1 , ya , x2 , y2 , p;

int main()
{
	cin>>x>>y;
	
	if(x<0 && y<0)
	{
		p = abs(x) + abs(y);
		x1 = -p;
		ya = 0;
		x2 = 0;
		y2 = -p;
	}
	else if(x<0 && y>=0)
	{
		p = abs(x) + abs(y);
		x1 = -p;
		ya = 0;
		x2 = 0;
		y2 = p;
	}
	else if(x>=0 && y<0)
	{
		p = abs(x) + abs(y);
		x1 = 0;
		ya = -p;
		x2 = p;
		y2 = 0;
	}
	else if(x>=0 && y>=0)
	{
		p = x + y;
		x1 = 0;
		ya = p;
		x2 = p;
		y2 = 0;
	}

	cout<<x1<<" "<<ya<<" "<<x2<<" "<<y2;
	return 0;
}