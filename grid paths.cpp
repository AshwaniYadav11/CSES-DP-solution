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
    ll n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n,0));

    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            char c;
            cin>>c;
            arr[i][j]=(c=='*')?0:1;
        }
    }

    vector<vector<int>> dp(n,vector<int>(n,0));

    dp[n-1][n-1]=(arr[n-1][n-1]==0)?0:1;


    for(ll i=n-2;i>=0;i--)
    {
        if(arr[i][n-1]==0)dp[i][n-1]=0;
        else
        {
            dp[i][n-1]+=dp[i+1][n-1];
        }
    }

     for(ll i=n-2;i>=0;i--)
    {
        if(arr[n-1][i]==0)dp[n-1][i]=0;
        else
        {
            dp[n-1][i]+=dp[n-1][i+1];
        }
    }

    for(ll i=n-2;i>=0;i--)
    {
        for(ll j=n-2;j>=0;j--)
        {
            dp[i][j]=(arr[i][j]==0)?0:(dp[i][j]+(dp[i+1][j]%(1000000007)+dp[i][j+1]%(1000000007))%(1000000007));

        }
    }
    cout<<dp[0][0]%(1000000007);



}
