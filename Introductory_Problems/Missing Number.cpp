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
	int n;
	cin>>n;
	ll s=0;
	for(int i=0;i<n-1;i++){
		int x;
		cin>>x;
		s+=x;
	}
	s=(1ll*n*(n+1)/2) - s;
	cout<<s;
}
