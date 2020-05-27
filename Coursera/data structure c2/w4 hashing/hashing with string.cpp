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
//#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ln "\n"
#define fabl(i,a,b) for(i=a;i<b;i++)
#define fabe(i,a,b) for(i=a;i<=b;i++)
#define fre(i,a,b) for(i=b;i>=a;i--)
ll mod=1000000007,x=263,m;
map<string,ll> mp;

ll compute_hash(string s){
	ll ans=0;
	for(ll i=s.size();i>=0;i--){
		ans = (ans*x + s[i] )%mod;
	}
	ans =ans%m;
	return ans;
}
void solve() {
	cin >> m;
	ll n,i,j;
	cin >> n;
	vector<string> v[m];
	while(n--){
		string s,s2;
		cin >> s;
		if(s == "add"){
			cin >> s2;
			if(mp.count(s2)==0){
				mp[s2]=1;
				ll x=compute_hash(s2);
				v[x].pb(s2);
			}
			
		}
		else if(s == "check"){
			ll val;
			cin >> val;
			for(i=v[val].size()-1;i>=0;i--){
				cout << v[val][i] << " ";
			}
			cout << ln;
		}
		else if(s == "find"){
			cin >> s2;
			if(mp.count(s2) > 0){
				cout << "yes\n";
			}
			else cout << "no\n";
		}
		else if(s == "del"){
			cin >> s2;
			if(mp.count(s2) > 0){
				mp.erase(s2);
				ll x=compute_hash(s2);
				for(i=0;i<v[x].size();i++){
					if(v[x][i] == s2){
						v[x].erase(v[x].begin()+i);
					}
				}
			}
		}
		/*for(j=0;j<m;j++){
			ll val=j;
			for(i=0;i<v[val].size();i++){
				cout << val << ":" << v[val][i] << " ";
			}
			cout << ln;
		}*/
	}
}
int main(){
	fastio
	/*ll t;
	cin >> t;
	while(t--)*/
		solve();
	return 0;
}
