#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define pbc pop_back
#define pf push_front
#define pp pop_front
#define ft first
#define sd second
#define mod 1000000007

ll power(ll x,ll p,ll m){
	ll ans=1;
	ll B=x;
	while(p){
		if(p%2) ans=(B*ans)%m;
		B=(B*B)%m;
		p=p/2;
	}
	return ans;
}

int  main()
{
	int t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		ll r=power(b,c,mod-1);
		cout<<power(a,r,mod)<<endl;
	}
}
