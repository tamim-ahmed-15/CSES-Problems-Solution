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
	ll n;
    cin>>n;
    while(n!=1){
    	cout<<n<<" ";
        if(n%2==0){
            
            n=n/2;
        }
        else{
            n=n*3;
            n+=1;
        }
    }
    cout<<n;
}
