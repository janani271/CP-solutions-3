#include<bits/stdc++.h>
using namespace std;
int main(){
	set<char>se;
	string s="sdhbshdbs";
	for(int i=0;i<s.size();i++) se.insert(s[i]);
	for(set<char>::iterator it=se.begin();it!=se.end();it++) cout<<*it<<" ";
}
