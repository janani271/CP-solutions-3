#include<bits/stdc++.h>
using namespace std;
char dir[100009];
long long t , a , b , c , d , i ,  ti , flag;
int main()
{
	cin>>t>>a>>b>>c>>d;

	for(i=1;i<=t;i++)
	{
		cin>>dir[i];
	}

	 ti=0; flag=0;
	if(a<=c && b<=d) //up and front => E and N
	{
		for(i=1;i<=t;i++)
		{
			if(dir[i]=='E' && a<c)
			{
				a++;
			}
			if(dir[i]=='N' && b<d)
			{
				b++;
			}
			 ti++;
			if(a==c && b==d)
			{
				flag=1;break;
			}
		}
	}
	else if(a<=c && b>=d) // up and back => E and S 
	{
		for(i=1;i<=t;i++)
		{
			if(dir[i]=='E' && a<c)
			{
				a++;
			}
			if(dir[i]=='S' && b>d)
			{
				b--;
			}
			 ti++;
			if(a==c && b==d)
			{
				flag=1;break;
			}
		}
	}
	else if(a>=c && b<=d)  //down and front => W and N
	{
		for(i=1;i<=t;i++)
		{
			if(dir[i]=='W' && a>c)
			{
				a--;
			}
			if(dir[i]=='N' && b<d)
			{
				b++;
			}
			 ti++;
			if(a==c && b==d)
			{
				flag=1;break;
			}
		}
	}
	else if(a>=c && b>=d) // down and back => W and S
	{
		for(i=1;i<=t;i++)
		{
			if(dir[i]=='W' && a>c)
			{
				a--;
			}
			if(dir[i]=='S' && b>d)
			{
				b--;
			}
			 ti++;
			if(a==c && b==d)
			{
				flag=1;break;
			}
		}
	}

	if(flag==0)
		 ti = -1;
	cout<< ti;
	return 0;
}