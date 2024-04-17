#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
int  main()
{
	string s;
	cin>>s;
	int l=s.size();
	int c=1,mx=1;
	char x=s[0];
	for(int i=1;i<l;i++){
		if(s[i]==x){
			c++;
			mx=max(mx,c);
		}
		else{
			c=1;
			x=s[i];
		}
	}
	cout<<mx;
}
