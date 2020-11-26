#include<bits/stdc++.h>
using namespace std;
#define MAX                   1e9+7
#define PrintA(a,m, n)        for(int i=m;i<n;i++) cout<<a[i]<<" ";cout<<endl;

#define InputA(a,n)           for(int i=0;i<n;i++)cin>>a[i];

#define InputV(a,n)           for(int i=0;i<n;i++)cin>>a[i];

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
    vector<ll> coin(n);
    InputV(coin,n);
    vector<ll> dp(x+1,0);
    dp[0]=1;

    for(ll i=0;i<n;i++)
    {
        for(ll j=1;j<=x;j++)
        {
            if(j>=coin[i])
            {
                dp[j]=(dp[j]%(1000000007)+dp[j-coin[i]]%(1000000007))%(1000000007);
            }
        }
    }

    cout<<dp[x]%(1000000007);



}
