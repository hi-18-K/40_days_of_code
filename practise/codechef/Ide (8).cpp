#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<utility>
#include<numeric>
#include<ctime>
#include<set>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define     ll          long long int 

typedef  vector<int>             vi;
typedef  vector<string>         vs;
typedef  vector<char>             vc;
typedef  vector<bool>             vb;
typedef  vector<pair<ll,ll>>      vpi;


int main() 
{
	fastio
	ll t;
	cin >> t;
	while(t--)
	{
	    ll k,n,q,x,y,i,j,ans,maxm,minm,c1=0,c0=0;
	    cin >> n >> k >> q;
	    char s[n+1];  s[0]=-1;
	    for(i=1;i<=n;i++)
	    {
	        cin >>s[i];
	    } 
	    //for(i=1;i<=n;i++)
	    //    cout << s[i] ;
	    j=1;
	    if(s[1]=='0')       c0=1;
	    else if(s[1]=='1')  c1=1;
	    ll far[n+1]={0},sumfar[n+1]={0};
	    far[0]=0;
	    for(i=1;i<=n;i++)
	    {
	        while(j<=n&&c1<=k&&c0<=k)
	        {
	            j+=1;
	            if(j>n) break;
	            if(s[j]=='1')       c1++;
	            else if(s[j]=='0')  c0++;
	        }
	        far[i]=j;   //cout << far[i] << " ";
	        if(s[i]=='1')       c1--;
	        else                c0--;
	    }
	    //cout << '\n';
	    sumfar[0]=0;
	    for(i=1;i<=n;i++)
	    {
	        sumfar[i]=sumfar[i-1]+far[i];
	        //cout << sumfar[i]<< " ";
	    }
	    //cout << "\n";
	    for(i=0;i<q;i++)
	    {
	        ll l,r;
	        cin >> l >> r;
	        ll k1=l-1,k2=r+1,km,k;
	        while(1)
	        {
	            km=(k1+k2)/2;
	            if(km==k1)  break;
	            if(far[km]<=r)
	                k1=km;
	            else 
	                k2=km;
	        }
	        k=k1;
	        ans=sumfar[k]-sumfar[l-1]+(r-k)*(r+1)-(r*(r+1)/2-l*(l-1)/2);
	        cout << ans << "\n";
	    }
	}
	return 0;
}