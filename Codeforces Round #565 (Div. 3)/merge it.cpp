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
ll mod=1000000007;

int main() {
				fast
				ll t;
				
				cin>>t;
				while(t--)
				{
						ll n;
				       cin>>n;
					ll arr[n];
					ll rem0=0,rem1=0,rem2=0;
					 for(ll i=0;i<n;i++)
					 {
					 	cin>>arr[i];
					 	if(arr[i]%3==0)
					 	rem0++;
					 	else if(arr[i]%3==1)
					 	rem1++;
					 	else
					 	rem2++;
					 
					 }
					 ll ans=rem0;
					 ans+=min(rem1,rem2);
					 
					 if(rem1<rem2){
					 
					 rem2-=rem1;
					 rem1=0;}
					 else{
					 
					 rem1-=rem2;
					 rem2=0;
				}
				ans+=rem2/3;
				ans+=rem1/3;
			      cout<<ans<<endl;
					 
					 
			   }
				
				
				
				
	return 0;
}
