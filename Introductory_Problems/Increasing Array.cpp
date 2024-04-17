#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
const int M=1e9+7;
int vis[1000000];
int  main()
{
	ll n;
	cin>>n;
	vector<ll>v(n);
	for(ll i=0;i<n;++i)cin>>v[i];
	ll c=0;
  for(ll i=0;i<n-1;i++)
  {
    if(v[i+1]<v[i])
    {
    		c+=v[i]-v[i+1];
    		v[i+1]=v[i];
    }
  }
    cout<<c;
}
