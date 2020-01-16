#include<bits/stdc++.h>
using namespace std;
long long t , n,mov;
void move_disks(long long m , long long a , long long c , long long b )
{
	if(m==1)
	{
		cout<<"move disk "<<m<<" from rod "<<a<<" to rod "<<c<<endl;
		//mov++;
		return;
	}
	else
	{
		move_disks(m-1,a,b,c);
		mov++;// from_rod to aux_rod
		cout<<"move disk "<<m<<" from rod "<<a<<" to rod "<<c<<endl; // move the last rod from from_rod to to_rod
		move_disks(m-1,b,c,a);
		mov++;   //aux_rod to to_rod
	}
}
int main()
{
	cin>>t;
	while(t--)
	{
		mov=0;
		cin>>n;
		move_disks(n,1,3,2);
		cout<<mov+1<<endl;
	}
	return 0;
}