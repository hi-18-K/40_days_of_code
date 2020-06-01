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
//#include<bits/stdc++.h>
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

map<int,string> m1; map<string,int> m2;
vector<vector<int>> v(1005,vector<int>(2,-1)); 
string s="";

void dfs(int cur){
	if(cur == -1)
		return;
	s.pb('L'); dfs(v[cur][0]); s.pop_back();
	s.pb('R'); dfs(v[cur][1]); s.pop_back();
	m1[cur] = s;
	m2[s] = cur;
	return;
}

void solve(){
	int n,ind,j,rind,q,i,x;
	cin >> n >> q;
	int par,chld; char dir;
	for(i=0;i<n-1;i++){
		cin >> par >> chld >> dir;
		if(dir == 'L')
			v[par][0] = chld;
		else
			v[par][1] = chld;
	}
	dfs(1);
	for(i=0;i<q;i++){
		ll nd;
		cin >> nd;
		if(nd == 1) cout << "1\n";
		else {
			string s,simg="";
			s = m1[nd];
			for(j=0;j<s.size();j++){
				if(s[j] == 'L') simg.pb('R');
				else simg.pb('L');
			}
			int ans = -1;
			if(m2[simg]) ans = m2[simg];
			cout << ans << ln;
		}
	}
}
int main() {
  fastio
  //ll t;
  //cin >> t;
  //while(t--)
  	solve();
  return 0;
}
