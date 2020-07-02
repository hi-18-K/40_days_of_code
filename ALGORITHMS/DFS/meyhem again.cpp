#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <iostream>
#include<string>
#include<map>
#include<queue>
#include<algorithm>
#include <cstdio> 
#include <string> 
#include <vector> 
#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define test ll t;cin >> t;while(t--)
#define ll long long int
#define  sll stack<ll>
#define  qll queue<ll>
#define  pll pair<ll,ll>
#define  vll vector<ll>
#define  vpi vector<pair<int,int>>
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ln "\n"
#define fabl(i,a,b) for(i=a;i<b;i++)
#define fabe(i,a,b) for(i=a;i<=b;i++)
#define fre(i,a,b) for(i=b;i>=a;i--)
# include <cstdio> 
# include <string> 
# include <vector> 

int adj[1002][1002],vis[1002][1002];
int n,m;

pair<int,int> dfs(int curfill , int i, int j){
	if(i > n || j > m || i<1 || j<1) return {curfill,0};
	if(vis[i][j]==1) return {curfill,0};
	else if(adj[i][j] != curfill) return {curfill,0};
	vis[i][j] = 1;
	return {curfill , 1 + (dfs(curfill,i+1,j)).s + (dfs(curfill,i-1,j)).s + (dfs(curfill,i,j+1)).s + (dfs(curfill,i,j-1)).s}; 
}

void solve(){
	int i,j,x,y;
	for(i=1;i<=1001;i++){
		for(j=1;j<=1001;j++){
			adj[i][j]=-1,vis[i][j]=0;
		}
	}
	cin >> n >> m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin >> adj[i][j];
		}
	}
	pair<int,int> ans= {1e9+100,0};
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(!(vis[i][j])){
				pair<int,int> temp = dfs(adj[i][j],i,j);
				if(ans.s == temp.s){
					ans.f = min(temp.f,ans.f);
				}
				else if(ans.s < temp.s){
					ans.s = temp.s;
					ans.f = temp.f;
				}
			}
		}
	}
	cout << ans.f << " " << ans.s << ln;
}
int main(){
    fastio
    
    //ll t; cin >> t; while(t--)
    	solve();
    return 0;
}
