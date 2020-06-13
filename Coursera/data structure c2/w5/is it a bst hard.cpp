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
#define pb push_back
#define ppb pop_back
#define ln "\n"
#define fabl(i,a,b) for(i=a;i<b;i++)
#define fabe(i,a,b) for(i=a;i<=b;i++)
#define fre(i,a,b) for(i=b;i>=a;i--)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string ans = "CORRECT\n";
vector<ll> a;
void inorder(vector<vector<ll>>&v,ll nd)
{
    if(nd==-1)
        return;
    //if(v[nd][2]==v[nd][0]) {ans = "INCORRECT\n"; return;}
    inorder(v,v[nd][1]);
    a.pb(v[nd][0]);
    inorder(v,v[nd][2]);
}

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>>v(n,vector<ll>(3,0));       //use vector because it is not given that input will be between 1-n
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>v[i][0]>>v[i][1]>>v[i][2];
    }
    bool flag=0;
    if(n==0 || n==1) {cout << "CORRECT\n"; return;}
    inorder(v,0);
    for(i=0;i<a.size()-1;i++){
        if(v[a[i+1]][0] < v[a[i]][0]){
            flag=1; break;
        }
        if(v[a[i]][0]==v[a[i+1]][0] && v[a[i+1]][1] == a[i]){
            flag=1; break;
        }
    }
    if(flag==0){
        cout << "CORRECT\n";
    }
    else cout << "INCORRECT\n";
}
int main(){
    fastio //ll t; cin >> t;
    //while(t--)
        solve();
    return 0;
}
