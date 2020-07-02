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

int adj[26][26],vis[1002][1002];
int n,m;


void solve(){
	int i,j,x,y,k;
	string s,t;
	cin >> s >> t;
	n=s.size();
	cin >> m;
	for(i=0;i<26;i++){
		for(j=0;j<26;j++){
			adj[i][j]=0;
			if(i==j)	adj[i][j]=1;
		}
	}
	for(i=1;i<=m;i++){
		string temp;
		cin >> temp;
		adj[temp[0]-'a'][temp[3]-'a']=1;
	}
	if(s.size()!=t.size()){
		cout << "NO\n";
	}
	else{
		for(i=0;i<26;i++){
			for(j=0;j<26;j++){
				for(k=0;k<26;k++){
					adj[j][k] |= (adj[j][i] && adj[i][k]);
				}
			}
		}
		for(i=0;i<n;i++){
			if(adj[s[i]-'a'][t[i]-'a']==0){
				cout << "NO\n"; break;
			}
		}
		if(i==n){
			cout << "YES\n";
		}
	}
}
int main(){
    fastio
    ll t; cin >> t; while(t--)
    	solve();
    return 0;
}
