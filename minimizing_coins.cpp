#include<bits/stdc++.h>
using namespace std;
#define MAX                   1e9+7
#define PrintA(a,m, n)        for(int i=m;i<n;i++) cout<<a[i]<<" ";cout<<endl;

#define InputA(a,n)           for(int i=0;i<n;i++)cin>>a[i];

#define InputV(a,n)           for(ll i=0;i<n;i++)cin>>a[i];

#define PrintV(a)             for(int i=a.begin();i!=a.end();i++) cout<<*i<<" ";cout<<endl;
#define ll                    long long int

#define dict                  map<ll,ll>

#define fi                     first
#define se                     second



ll factorial(int n)
{if(n==0 || n==1)
    {return 1;}
else
    { return n*factorial(n-1);}
}


int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> coins(n);
    InputV(coins,n);
    vector<ll> dp(x+1,1000000007);

   /* for(auto y:coins)
    {
        dp[y]=1;
    }*/
    dp[0]=0;

    for(ll i=0;i<=x;i++)
    {
        for(auto y:coins)
        {
            if(i>=y)
            {
                dp[i]=min(dp[i],1+dp[i-y]);
            }
        }
    }
    if(dp[x]==1000000007)
    {
        cout<<-1;
    }
    else
        cout<<dp[x];




}
