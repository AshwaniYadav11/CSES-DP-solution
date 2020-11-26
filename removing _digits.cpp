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

ll sets(ll n)
{
    vector<ll> sets;

    while(n>0)
    {
      sets.push_back(n%10);
        n=n/10;
    }

   return *max_element(sets.begin(),sets.end());
}


int main()
{
    ll n;
    cin>>n;
     if(n>9){
    vector<ll> dp(n+1,0);
    for(int i=0;i<10;i++)
    {
        dp[i]=1;
    }

    for(ll i=10;i<=n;i++)
    {  // cout<<sets(i);
        dp[i]+=(dp[i-sets(i)]+1);
    }

    cout<<dp[n];}
    else
        cout<<1;

}
