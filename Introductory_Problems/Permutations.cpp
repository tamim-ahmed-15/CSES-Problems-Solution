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
	if(n==1)cout<<n;
	else if(n<4)cout<<"NO SOLUTION";
	else if(n==4)cout<<"2 4 1 3";
	else{
		for(int i=n;i>0;i--){
		   if(i%2==0)cout<<i<<" ";
	  }
	  for(int i=n;i>0;i--){
		   if(i%2)cout<<i<<" ";
	  }
	}
}
