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
					    ll count=0;
					    while(n>1)
					    {
					    	if(n%2==0)
					    	{
					    		n/=2;
					    		count++;
							}
							else if(n%3==0)
							{
								n=(2*n)/3;
								count++;
							}
						else	if(n%5==0)
							{
								n=(4*n)/5;
								count++;
							}
							else
							break;
						}
						if(n==1)
						cout<<count<<endl;
						else
						cout<<-1<<endl;
					 
			   }
				
				
				
				
	return 0;
}
