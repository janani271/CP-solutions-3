#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000000
int prime[SIZE] ;
long long n , a[100000] , i , k , j;


void tprime (long long p)
{
	double s = sqrt(p);
	int r = int(sqrt(p));
	//cout<<"\n at "<<p<<" "<<r<<" "<<s<<" \n";
	if(s == r)
	{
		if(prime[r])
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else
			cout<<"NO\n"; 
}

void isprime()
{
	prime[0]=0;
	prime[1]=0;
	for(k=2;k<SIZE;k++)
	{
		prime[k]=1;
	}
	for(k=2;k<SIZE;k++)
	{
		if(prime[k])
		{
			for(j=k*k;j<SIZE;j+=k)
			{
				prime[j]=0;
			}
		}
	}
}

int main()
{
	isprime();
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n;i++)
	{
		tprime(a[i]);
	}

	return 0;
}