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
	int n,t;
	cin>>n>>t;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(make_pair(x,i+1));
	}
	sort(v.begin(),v.end());
	int l=0,r=n-1;
	while(l<r){
		if(v[l].first + v[r].first >t)r--;
		else if(v[l].first + v[r].first <t)l++;
		else if(v[l].first+v[r].first==t){
			cout<<v[l].second<<" "<<v[r].second;
			return 0;
		}
	}
	cout<<"IMPOSSIBLE";
}
