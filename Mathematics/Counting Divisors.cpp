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
	while(n--){
		int x;
		cin>>x;
		int c=0;
		for(int i=1;i*i<=x;i++){
			if(x%i ==0){
				c++;
				if((x/i)!=i)c++;
			}
		}
		cout<<c<<endl;
	}
}
