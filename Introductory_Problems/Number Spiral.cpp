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
const int N=1000001;
#define mod 1000000007
int  main()
{
	ll n;
	cin>>n;
	ll s=n*(n+1)/2;
	if(s%2)cout<<"NO";
	else{
		cout<<"YES"<<endl;
		vector<ll>a,b;
		int f=1;
		a.pb(n);
		n--;
		while(n!=0){
			if(f){
				b.pb(n);
				n--;
				if(n!=0){
					b.pb(n);
					n--;
				}
				f=0;
			}
			else{
				a.pb(n);
				n--;
				if(n!=0){
					a.pb(n);
					n--;
				}
				f=1;
			}
		}
		cout<<a.size()<<endl;
		for(ll i=0;i<a.size();i++){
			cout<<a[i]<<" ";
		}
		cout<<endl<<b.size()<<endl;
		for(ll i=0;i<b.size();i++){
			cout<<b[i]<<" ";
		}
	}
}