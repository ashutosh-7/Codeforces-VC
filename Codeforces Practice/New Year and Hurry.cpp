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
			ll n,t;
			cin>>n>>t;
			t=240-t;
			ll count=0;
			ll ans=0;
			ll i=1;
			while(ans<=t)
			{
				ans+=5*i; 
				i++;
				if(ans<=t)
				count++;
				if(count>=n)
				{
					break;
				}
			}
			cout<<count<<endl;
	return 0;
}
