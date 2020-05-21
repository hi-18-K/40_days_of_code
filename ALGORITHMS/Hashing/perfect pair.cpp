#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <iostream>
#include<string>
#include<map>
#include<queue>
#include<algorithm>
#include<stack>
#include<limits>
#include<math.h>
#include<vector>
#include<assert.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define  sll stack<ll>
#define  qll queue<ll>
#define  pll pair<ll,ll>
#define  vll vector<ll>
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define test ll t;cin >>t; while(t--)
#define ln "\n"
#define fabl(i,a,b) for(i=a;i<b;i++)
#define fabe(i,a,b) for(i=a;i<=b;i++)
#define fre(i,a,b) for(i=b;i>=a;i--)
/*class first{
public:
    string str; int val;
private:
    string str2; int val2;
public:
    string get_private_string(){
        return str2;
    } 
    int mpdify_private_value(int x){
        val2=x;
    }
    int get_private_value(){
        return val2;
    }
};*/
void solve(){
    ll n,i,j,x,y;
    cin >> n;
    ll a[n]; map<ll,ll>mp;
    ll frq[1003]={0};
    for(i=0;i<n;i++) {cin >> a[i]; mp[a[i]]++; frq[a[i]]++;}
    ll cnt=0;
    for(i=1;i<=1000;i++){
        if(frq[i] > 0){
            ll z=sqrt(2*i), z2=cbrt(2*i);;
            if(frq[i]>1 && (z*z == 2*i || z2*z2*z2 == 2*i) ){
                cnt+=((frq[i]*(frq[i]-1))/2);
            }
            for(j=i+1;j<=1000;j++){
                if(frq[j]==0) continue;
                ll k=sqrt(i+j),  k2=cbrt(i+j);;
                if(k*k == i+j || k2*k2*k2 == (i+j) ){
                    cnt+=(frq[i]*frq[j]);
                }
            }
        }
    }
    cout << cnt << ln;
}
int main()
{
    fastio
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
