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
			ll arr[3];
			cin>>arr[0]>>arr[1]>>arr[2];
			sort(arr,arr+3);
			ll ans=arr[1]-arr[0]+arr[2]-arr[1];
			
			cout<<ans<<endl;
			
	return 0;
}
