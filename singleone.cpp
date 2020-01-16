#include<bits/stdc++.h>
using namespace std;
int i , j , a[10][10] , pos_i , pos_j , c;
int main()
{
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{
				pos_i = i;
				pos_j = j;
			}
		}
	}

	if(pos_i==3)
	{
		if(pos_j==3)
		{
			c=0;
		}
		else
		{
			c = abs(pos_j-3);
		}
	}

	if(pos_j==3)
	{
		if(pos_i==3)
		{
			c=0;
		}
		else
		{
			c = abs(pos_i-3);
		}
	}

	else
	{
		c = abs(pos_i-3) + abs(pos_j-3);
	}

	cout<<c;
	
	return 0;
}