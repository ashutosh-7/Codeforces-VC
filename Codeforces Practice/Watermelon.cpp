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
			ll n;
			cin>>n;
			ll count=0;
			for(ll i=2;i*i<=n;i+=2)
			{
				if(n%i==0)
				{
					if(n/i==i)
					count++;
					
					else
					{
					    if((n-i)%2==0)
					    count++;
					}
				}
				
			}
			if(count==0) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
	return 0;
}
