#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
const int M=1e9+7;
int vis[10000000];
int  main()
{
	optimize();
	int n;
	cin>>n;
	int c=0;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	auto it=unique(v.begin(),v.end())-v.begin();
	cout<<it;
}
