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
				
				ll a,b,c,n;
				cin>>a>>b>>c>>n;
				ll arr[3];
				arr[0]=a;
				arr[1]=b;
				arr[2]=c;
				sort(arr,arr+3);
				ll x=arr[2]-arr[0];
				ll y=arr[2]-arr[1];
//				for(ll i=0;i<3;i++)
//				cout<<arr[i]<<" ";
			//	cout<<x+y<<endl;
				if(x+y>n)
				{
					cout<<"NO"<<endl;
				}
				else
				{
					if(x+y==n)
					cout<<"YES"<<endl;
					else
					{
						n-=x;
						n-=y;
						//cout<<n<<endl;
						if(n%3==0)
						cout<<"YES"<<endl;
						else
						cout<<"NO"<<endl;
					}
				}
				
			}
			
	return 0;
}
