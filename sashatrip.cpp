#include<bits/stdc++.h>
using namespace std;
long long n , v , cost=0 , fuel_req=0 , fuel=0 , i ;
int main()
{
	cin>>n>>v;
	cost=0;

	if(v>=n)
		cout<<n-1<<"\n";
	else if(v==n-1)
		cout<<v<<"\n";
	else if(n==1||n==0||v==0)
		cout<<"0"<<"\n";
	else
	{
		fuel_req=n-1;
		for(i=1;i<n;i++)
		{
			if(v>1)
			{
			    if(i==1)
			    {
				    fuel=v;
				    cost=v;
			    }
			    else
			    {
				    fuel_req -= 1;
				    fuel = fuel -1 ;
				    if(fuel>=fuel_req)
					    cost+=0;
				    else
					    if((fuel_req-fuel)<=v)
					    {
						    cost+=((fuel_req-fuel)*i);
						    fuel = fuel + (fuel_req-fuel);
					    }
					    else
					    {
						    cost+=(v-fuel)*i;
						    fuel  = fuel + (v-fuel);
					    }
			    }
			}
			
			else
			{
			    cost = ((n-1)*n)/2;
			}
			
			//cout<<"cost at "<<i<<" : "<<cost<<"\n";
			//cout<<"fuel_req at "<<i<<" : "<<fuel_req<<"\n";
			//cout<<"fuel at "<<i<<" : "<<fuel<<"\n";
		}
		cout<<cost<<"\n";
	}
}
