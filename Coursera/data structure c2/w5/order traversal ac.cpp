#include <bits/stdc++.h>
using namespace std;
void inorder(vector<vector<int>>&v,int nd)
{
    if(nd==-1)
        return;
    inorder(v,v[nd][1]);
    cout<<v[nd][0]<<" ";
    inorder(v,v[nd][2]);
}
void preorder(vector<vector<int>>&v,int nd)
{
    if(nd==-1)
        return ;
    cout<<v[nd][0]<<" ";
    preorder(v,v[nd][1]);
    preorder(v,v[nd][2]);
    
}
void postorder(vector<vector<int>>&v,int nd)
{
    if(nd==-1)
        return ;
    postorder(v,v[nd][1]);
    postorder(v,v[nd][2]);
    cout<<v[nd][0]<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(3,0));       //use vector because it is not given that input will be between 1-n
    int i;
    for(i=0;i<n;i++)
    {
        cin>>v[i][0]>>v[i][1]>>v[i][2];
    }
    inorder(v,0);
    cout<<endl;
    preorder(v,0);
    cout<<endl;
    postorder(v,0);
    return 0;
}
