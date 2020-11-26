#include<bits/stdc++.h>
using namespace std;
#define MAX                   1e9
#define PrintA(a,m, n)        for(int i=m;i<n;i++) cout<<a[i]<<" ";cout<<endl;

#define InputA(a,n)           for(int i=0;i<n;i++)cin>>a[i];

#define InputV(a,n)           for(int i=0;i<n;i++)int p;cin>>p;  a.push_back(p);

#define PrintV(a)             for(int i=a.begin();i!=a.end();i++) cout<<*i<<" ";cout<<endl;
#define ll                    long long int

#define dict                   map<ll,ll>

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
    ll mod   =   1000000007;
    ll n;
    cin>>n;
    vector<ll> ways(n+1,0);
    ways[0]=ways[1]=1;

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                ways[i]=(ways[i]%mod + ways[i-j]%mod)%mod ;
            }

        }
    }
    cout<<(ways[n]%mod);

}
