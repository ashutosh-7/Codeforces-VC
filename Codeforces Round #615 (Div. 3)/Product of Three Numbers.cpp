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
			ll t;
			cin>>t;
			while(t--)
			{
				
				ll n;
				cin>>n;
				vector<ll>v;
				for(ll i=2;i*i<=n;i++)
				{
					if(n%i==0)
					{
						if(n/i==i)
						v.pb(i);
						else
						{
							v.pb(i);
							v.pb(n/i);
						}
					}
				}
				sort(v.begin(),v.end());
				//cout<<v.size()<<endl;
				//cout<<v[v.size()-1];
				if(v.size()<3)
				cout<<"NO"<<endl;
				else
				{
ll a=v[0];
n=n/a;			
			v.clear();
				for(ll i=a+1;i*i<=n;i++)
				{
					if(n%i==0)
					{
						if(n/i==i)
						v.pb(i);
						else
						{
							v.pb(i);
							v.pb(n/i);
						}
					}
				}
				ll count=0,b,c;
				for(ll i=0;i<v.size();i++)
				{
					for(ll j=i+1;j<v.size();j++)
					{
						if(v[i]*v[j]==n)
						{
							b=v[i];
							c=v[j];
							count++;
							break;
						}
					}
				}
				if(count==0)
				cout<<"NO"<<endl;
				else
				{
					cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
				}

				
			}
		}
			
	return 0;
}
