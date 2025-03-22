#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
const int M=1e9+7;
int  main()
{
	int n,x;
	cin>>n>>x;
	vector<pair<ll,int>>v;
	for(int i=0;i<n;i++){
		ll t;
		cin>>t;
		v.pb(make_pair(t,i+1));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-2;i++){
		int l=i+1,r=n-1;
		while(l<r){
			ll s=v[l].first+v[r].first+v[i].first;
			if(s==x){
				cout<<v[i].second;
				cout<<" "<<v[l].second;
				cout<<" "<< v[r].second;
				return 0;
			}
			else if(s>x)r--;
			else l++;
		}

	}
	cout<<"IMPOSSIBLE";
}
