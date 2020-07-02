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

vector<int> adj[10];
bool vis[100005];
int n,m;


void solve(){
	string s;
	cin >> s;
	int i,j,n,m,x,y,prev,next;
	for(i=0;i<100005;i++){
		vis[i]=0;
	}
	n=s.size();
	for(i=0;i<n;i++){
		x = s[i]-'0';
		adj[x].pb(i);
	}

	int src = 0 , end = n-1 , level[n]={0};
	queue<int> q;
	q.push(src); level[src]=0; vis[src]=1;
	while(!q.empty()){
		int k=q.front();
		int i = k;
		q.pop();
		for(auto u:adj[s[k]-'0']){
			if(!(vis[u])){
				vis[u]=1;
				q.push(u);
				level[u] = level[k]+1;
			}
		}
		adj[s[k]-'0'].clear();
		if(i>0 && vis[i-1]==0){
			vis[i-1]=1;
			q.push(i-1);
            level[i-1] = level[k] + 1;
		}
		if(i<n-1 && vis[i+1]==0){
			vis[i+1]=1;
			q.push(i+1);
            level[i+1] = level[k] + 1;
		}
	} 
	cout << level[n-1] << ln;
}
int main(){
    fastio
    //ll t; cin >> t; while(t--)
    	solve();
    return 0;
}
