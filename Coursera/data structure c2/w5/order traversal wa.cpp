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

class TreeOrders {
  int n;
  vector <int> key;
  vector <int> left;
  vector <int> right;

public:
  void read() {
    cin >> n;
    key.resize(n+10);
    left.resize(n+10);
    right.resize(n+10);
    for (int i = 0; i < n; i++) {
      cin >> key[i] >> left[i] >> right[i];
      key[i]--,left[i]-- , right[i]--;
    }
  }

  void in_order(ll i) {
	    if(key[i] == -1)
	    	return ;
	    in_order(left[i]);
	    cout << key[i]+1 << " ";
	    in_order(right[i]);
  }

  void pre_order(ll i) {
    if(key[i] == -1)
    	return ;
    cout << key[i]+1 << " ";
    pre_order(left[i]);
    pre_order(right[i]);
  }

  void post_order(ll i) {
    if(key[i] == -1)
    	return ;
    post_order(left[i]);
    post_order(right[i]);
    cout << key[i]+1 << " ";
    
  }
};

/*void print(vector <int> a) {
  for (size_t i = 0; i < a.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << a[i];
  }
  cout << '\n';
}*/

int main() {
  ios_base::sync_with_stdio(0);
  TreeOrders t;
  t.read();
  t.in_order(0);  cout << ln;
  t.pre_order(0); cout << ln;
  t.post_order(0);cout << ln;
  return 0;
}
