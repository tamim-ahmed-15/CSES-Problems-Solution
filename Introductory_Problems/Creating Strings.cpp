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
	vector<string>v;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	do{
		v.pb(s);
	}while(next_permutation(s.begin(),s.end()));
	
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
 
}
