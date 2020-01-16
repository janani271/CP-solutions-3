#include <bits/stdc++.h>
using namespace std;
long long t , n , dp[50] , i,flag; 
string s;
int main() {
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>s;
	    flag=1;
	    for(i=0;i<n;i++)
	    {
	        //cout<<"\ns: "<<s[i]<<"\n";
	        if(s[i]=='0')
	        {
	            flag = 0;
	            cout<<"0"<<endl;
	            break;
	        }
	    }
	    if(flag)
	    {
	        dp[1]=1;
	        if((s[0]=='1'||s[0]=='2')&&(s[1]<='6'))
	            dp[2]=dp[1]+1;
	        else dp[2]=dp[1];
	        for(i=3;i<=n;i++)
	        {
	            if((s[i-2]=='1'||s[i-2]=='2')&&(s[i-1]<='6'))
	                dp[i] = dp[i-1] + dp[i-2];
	            else dp[i] = dp[i-1];
	        }
	        cout<<dp[n]<<endl;
	   }
	}
	return 0;
}