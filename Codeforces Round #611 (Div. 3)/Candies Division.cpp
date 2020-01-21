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
				ll n,k;
				cin>>n>>k;
				ll ans1=(n/k)*k;
				ll ans=ans1;
				ans+=min(n-ans1,k/2);
				cout<<ans<<endl;
				
				
				
				}
	return 0;
}
