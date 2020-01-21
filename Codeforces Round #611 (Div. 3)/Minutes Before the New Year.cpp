#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
				ll t;
				cin>>t;
				while(t--)
				{
				ll a,b;
				cin>>a>>b;
				ll ans=23-a;
				ans*=60;
				ll c=60-b;
				ans+=c;
				cout<<ans<<endl;
				
				
				
				}
	return 0;
}
