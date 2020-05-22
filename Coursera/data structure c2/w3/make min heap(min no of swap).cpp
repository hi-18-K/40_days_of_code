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
void swap(int *a,int *b) {int temp=*a; *a=*b; *b=temp;}
//coursera
vpi v; ll cnt=0;
void heapify(int arr[], int n, int i) 
{ 
    int smallest = i;
    int l = 2 * i + 1; // left = 2*i + 1 
    int r = 2 * i + 2; // right = 2*i + 2 
    if (l < n && arr[l] < arr[smallest]) 
        smallest = l; 
    if (r < n && arr[r] < arr[smallest]) 
        smallest = r; 
    if (smallest != i) { 
        swap(arr[i], arr[smallest]); 
        cnt++; v.pb({i,smallest});
        heapify(arr, n, smallest); 
    } 
} 
void buildHeap(int arr[], int n) 
{ 
    int startIdx = (n / 2) - 1; 
    for (int i = startIdx; i >= 0; i--) { 
        heapify(arr, n, i); 
    } 
} 

void solve() {
	cnt=0; v.clear();
	int n,i;
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++) cin >> arr[i];
	buildHeap(arr,n);
	cout << cnt << ln;
	for(i=0;i<v.size();i++) cout << v[i].first << " " << v[i].second <<ln;
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
