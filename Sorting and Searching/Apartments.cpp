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
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>d;
	vector<int>a;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		d.pb(x);
	}
	for(int i=0;i<m;i++){
		int x; cin>>x;
		a.pb(x);
	}
	sort(d.begin(),d.end());
	sort(a.begin(),a.end());
	int i=0,j=0,c=0;
	while(i<n){
		while(j<m && (d[i]-k)>a[j])j++;
		if(abs(d[i]-a[j])<=k){
			c++;
			i++;
			j++;
		}
		else i++;
	}
	cout<<c;
}
