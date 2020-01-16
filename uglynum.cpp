#include <bits/stdc++.h>
using namespace std;
#define SIZE 10000000
long long i , n , t , a[SIZE] , b[SIZE] , k ;
void prime()
{
    a[1]=1; a[2]=1; a[3]=1; a[5]=1; k=1;
    for(i=1;i<=SIZE;i++)
    {
        if(a[i]==0)
        {
            if(i%2==0 && a[i/2]==1)
            a[i]=1;
            else if(i%3==0 && a[i/3]==1)
            a[i]=1;
            if(i%5==0 && a[i/5]==1)
            a[i]=1;
        }
        if(a[i]==1)
        {
            b[k]=i;
            k++;
        }
    }
}
int main() {
    prime();
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<b[n]<<endl;
    }
    return 0;
}