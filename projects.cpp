#include<bits/stdc++.h>
using namespace std;
#define MAX                   1000000007
#define PrintA(a,m, n)        for(int i=m;i<n;i++) cout<<a[i]<<" ";cout<<endl;

#define InputA(a,n)           for(int i=0;i<n;i++)cin>>a[i];

#define InputV(a,n)           for(ll i=0;i<n;i++)cin>>a[i];

#define PrintV(a)             for(int i=a.begin();i!=a.end();i++) cout<<*i<<" ";cout<<endl;
#define ll                    long long int
#define loop(i,a,b)             for(i=a;i<=b;i++)

#define dict                  map<ll,ll>

#define fi                     first
#define se                     second



ll factorial(int n)
{if(n==0 || n==1)
    {return 1;}
else
    { return n*factorial(n-1);}
}

struct project
{
    ll s,e,r;
};

bool cmp(project a,project b)
{
    return a.e<b.e;
}

ll binarySearch(project proj[],ll i)
{
    ll lo=0,hi=i-1;
    while(lo<=hi)
    {
        ll m=lo+(hi-lo)/2;
        if(proj[m].e<proj[i].s)
        {
            if(proj[m+1].e<proj[i].s)
            {
             lo=m+1;
            }
            else
            {
                return m;
            }

        }
        else
        {
            hi=m-1;
        }
    }
    return -1;
}


int main()
{
    ll n;
    cin>>n;

    project proj[n];
    ll i;
    loop(i , 0,n-1)
    {
        cin>>proj[i].s>>proj[i].e>>proj[i].r;
    }

    sort(proj,proj+n,cmp);

    vector<ll> dp(n,0);
    dp[0]=proj[0].r;

    loop(i,1,n-1)
    {
        dp[i]=max(dp[i-1],proj[i].r+((binarySearch(proj,i)==-1)?0:dp[binarySearch(proj,i)]));
    }
    cout<<dp[n-1];


}
