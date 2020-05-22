/*राधे कृष्णा*//*राधे कृष्णा*//*राधे कृष्णा*//*राधे कृष्णा*/
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
//coursera
void solve() {
	ll n,i,j;
	cin >> n;
	ll a[n]; ll ht[n]={0},maxht=0;
	for(i=0;i<n;i++) ht[i]=0;
	for(i=0;i<n;i++){
		cin >> a[i]; 
		if(a[i]==-1) 
			ht[i]=1;
	}
	ll temp=1,x;
	for(i=0;i<n;i++){
		temp=1; j=i; x=i;
		while(ht[a[j]]==0){
			if(ht[a[j]] > 0) break;
			temp++;
			j=a[j];
		}
		if(ht[x]==0)
		    ht[x] = ht[a[j]] + temp;
		/*if(a[j]!=-1)
		    cout << ht[a[j]] << "," << temp << "  ";
		cout << ht[x] << "    ";*/
		temp=1;
	}
	for(i=0;i<n;i++)
		if(ht[i] > maxht)
			maxht=ht[i];
	cout << maxht;
}	
int main(){
	fastio
	/*ll t;
	cin >> t;
	while(t--){*/
		solve();
	//}
	return 0;
}
