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
	int t;
	cin>>t;
	while(t--){
		ll col,row;
		cin>>row>>col;
		if(col>row){
			if(col%2){
				col=col*col;
				col=col-row+1;
			}
			else{
				col--;
				col=col*col;
				col=col+row;
			}
			cout<<col<<endl;
		}
		else{
			if(row%2){
				row--;
				row=row*row;
				row=row+col;
			}
			else{
				row=row*row;
				row=row-col+1;
			}
			cout<<row<<endl;
		}
	}
}