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
			ll a,b;
			cin>>a>>b;
			ll ans=min(min(a,b),(a+b)/2);
			a-=ans;
			b-=ans;
			cout<<ans<<" "<<(a+b)/2;
			
	return 0;
}
