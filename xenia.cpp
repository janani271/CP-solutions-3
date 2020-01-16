#include<bits/stdc++.h>
using namespace std;
long long n , k , i , twos_for_124 , twos_for_126 , one , two , three , four , six;
int a[100007] , prime_flag ;
int main()
{
	cin>>n;
	prime_flag=0;
	one=0;
	two=0;
	three=0;
	four=0;
	six=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];

		if(a[i]==5 || a[i]==7)
			prime_flag=1;

		else if(a[i]==1)
			one++;
		else if(a[i]==2)
			two++;
		else if(a[i]==3)
			three++;
		else if(a[i]==4)
			four++;
		else if(a[i]==6)
			six++;

	}
	
	if(prime_flag || one!=(n/3) || (four!=0 && four>two) || (three!=0 && three>six) || (six!=0 && six>(two+three)) || (two!=0 && two>(four+six)) || (two!=0 && three==0 && two!=(four+six)))
		cout<<"-1";

	else
	{
		twos_for_126 = two - four;
		twos_for_124 = two - twos_for_126; 

		for(k=1;k<=twos_for_124;k++)
		{
			cout<<"1 2 4\n";
		}

		for(k=1;k<=twos_for_126;k++)
		{
			cout<<"1 2 6\n";
		}

		for(k=1;k<=three;k++)
		{
			cout<<"1 3 6\n";
		}

	}

	return 0;
}