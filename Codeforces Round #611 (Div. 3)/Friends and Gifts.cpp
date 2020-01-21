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
				ll n;
				cin>>n;
				ll arr[n];
				ll count2=0;
				map<ll,ll>id,id2;
				for(ll i=0;i<n;i++)
				id2[i+1]=1;
				
				for(ll i=0;i<n;i++)
				{
						cin>>arr[i];
						if(arr[i]==0)
						id[i]=1;
						else
						id2[arr[i]]=0;
						
				}
				vector<ll>v;
				map<ll,ll>::iterator it;
				for(it=id2.begin();it!=id2.end();it++)
				{
					if(it->second!=0)
					v.pb(it->first);
				}
				sort(v.begin(),v.end());
				ll count=1;

				for(ll i=0;i<n;i++)
				{
					if(arr[i]==0)
					{
						arr[i]=v[v.size()-count];
						count++;
				}
			    }
		for(ll i=0;i<n;i++)
		{
			if(arr[i]==i+1)
			{
				for(ll j=0;j<n;j++)
				{
					if(id[j]==1 and arr[i]!=j+1)
					swap(arr[i],arr[j]);
				}
			}
		}
			
			for(ll i=0;i<n;i++)
			cout<<arr[i]<<" ";
				
				
				
				
				
				
	return 0;
}
