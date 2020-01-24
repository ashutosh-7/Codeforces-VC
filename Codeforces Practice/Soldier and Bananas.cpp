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
			
			ll k,n,w;
			cin>>k>>n>>w;
			ll ans=k*((w*(w+1))/2);
		//	cout<<ans<<endl;
			if(n>=ans)
			cout<<0<<endl;
			else
			cout<<ans-n<<endl;
			
	return 0;
}
