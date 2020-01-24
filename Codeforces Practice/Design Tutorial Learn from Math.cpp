#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define pb push_back
#define vi vector<int>
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;
int main() {
				fast
		ll x;
		ll n=1e6;
		ll prime[n];
		for(ll i=0;i<n;i++) prime[i]=0;
		//memset(prime,(ll)1,sizeof(prime));
		//cout<<prime[0]<<endl;
		for(ll i=2;i*i<=n;i++)
		{
			for(ll j=i*i;j<n;j+=i)
			{
				prime[j]=1;
			}
		}
		cin>>x;
		
		for(ll j=4;j<x;j++)
		{
			ll a=j;
			ll b=x-j;
			if(prime[a]==1 and prime[b]==1)
			{
				cout<<a<<" "<<b<<endl;
				break;
			}
		}
			
	return 0;
}
