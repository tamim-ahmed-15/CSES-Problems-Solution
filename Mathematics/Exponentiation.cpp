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
const int N=1001;
#define mod 1000000007
int  main()
{
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a==0 && b!=0)cout<<a<<endl;
		else if(b==0 && a==0)cout<<1<<endl;
		else{
			ll ans=1;
			while(b){
				if(b%2){
					ans=((ans%mod)*(a%mod))%mod;
					b--;
				}
				else{
					a=((a%mod)*(a%mod))%mod;
					b=b/2;
				}
			}
			cout<<ans<<endl;
		}
	}
}
