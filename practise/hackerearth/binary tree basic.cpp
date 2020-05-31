#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <iostream>
#include<string>
//#include<map>
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
int max(int a, int b){
    if(a>=b) return a;
    return b;
}
void solve(){
    int n,i,j,k,root;
    cin >> n >> root;
    vector<string> vs;
    for(i=0;i<n-1;i++){
        string s; int num;
        cin >> s >> num;
        vs.pb(s);
    }
    int len=0 , maxlen=0 , ans = 0;
    for(i=0;i<vs.size();i++){             //complex using pointers instead used string manipulation
        for(j=i+1;j<vs.size();j++){
            ll sz= min(vs[i].size(), vs[j].size());
            for(k=0;k<sz;k++){
                if(vs[i][k]==vs[j][k]) continue;
                else{
                    ans = max(ans, (vs[i].size() - (k) + vs[j].size() - (k) + 1));
                    break;
                }
            }
        }
    }
    cout << ans ;
}
int main(){
    fastio //ll t; cin >> t; while(t--)
    solve();
}
