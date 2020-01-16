#include<bits/stdc++.h>
using namespace std;

	vector<long long>G[100006];
	vector<long long>v[100006];
	map<long long, long long> mapp;
	long long i , c[100006] , n  , j , m , x , y , cost , mini=0; ;
	bool visited[100006];
	vector<long long>::iterator it; 
	
void DFS(int q , int z)
{
	v[z].push_back(q);
	visited[q] = true;
	vector<long long>::iterator p;
    for(p= G[q].begin(); p != G[q].end() ; p++)
    {
        if(!visited[*p])
            DFS(*p,z);
    }
}

int main()
{

	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>c[i];
		mapp[i]=c[i];
		
	}
	

	for(i=1;i<=m;i++)
	{
		cin>>x>>y;
		G[x].push_back(y);
		G[y].push_back(x);
	}

	for(i=1;i<=n;i++)
	{
		visited[i]=false;
	}
	
	j=1;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==false)
		{
			DFS(i,j);
			j++;
		}
	}

	cost=0;
	
	for(i=1;i<j;i++)
	{
		if(v[i].size()==1)
		{
			cost+=mapp[*v[i].begin()]; 
		}
		else
		{
			mini = mapp[*v[i].begin()];
		for(it=v[i].begin();it!=v[i].end();++it)
		{
			if(mapp[*it]<mini)
			mini=mapp[*it];
		}
		cost+=mini;
		}
	}

	
	cout<<cost;	
}

