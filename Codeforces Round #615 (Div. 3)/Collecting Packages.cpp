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
bool check(const pair<ll,ll>&i, const pair<ll,ll>&j )
{
	
	if(i.first<j.first)
	return true;
	else if(i.first==j.first)
	return i.second<j.second ;
	else 
	return false;
	
}


int main() {
				fast
			ll t;
			cin>>t;
			while(t--)
			{
				
				ll n;
				cin>>n;
				vector<pair<ll,ll> >v;
				for(ll i=0;i<n;i++)
				{
					ll temp1,temp2;
					cin>>temp1>>temp2;
					v.pb(make_pair(temp1,temp2));
					
				}
				
		
				sort(v.begin(),v.end(),check);
		ll count=0;
		for(ll i=0;i<n-1;i++)
		{
			if(v[i].first<v[i+1].first and v[i].second>v[i+1].second)
			{
				count++;
			}
		}
		if(count>0)
		
		{
			cout<<"NO"<<endl;
		}
		else
		{
		
				
//				for(ll i=0;i<n;i++)
//				cout<<v[i].first<<" "<<v[i].second<<endl;
				ll x=0,y=0;
				cout<<"YES"<<endl;
				for(ll i=0;i<n;i++)
				{
					
					ll x1=v[i].first-x;
					x+=x1;
					ll y1=v[i].second-y;
					y+=y1;
					//cout<<x1<<" "<<y1<<endl;
					for(ll j=0;j<x1;j++)
					{
						cout<<"R";
					}
					//cout<<"R";
					for(ll j=0;j<y1;j++)
					cout<<"U";
					
				}
cout<<endl;	
			}
			}
			
	return 0;
}
