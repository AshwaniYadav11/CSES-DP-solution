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


int main()
{
    int k;
    cin>>k;
    vector<int> a(k);
    InputV(a,k);
    ll dp[k+1][k+1];
    if(k<4)
    {
        cout<<max(a[0],a[k-1]);
    }
    else
    {




    int i,j,len;

    loop(len,1,k)
    {
        for(i=0;i+len<=k;i++)
        {
           j=i+len-1;

           ll p,q,r;
           p=(i+2<=j)?dp[i+2][j]:0;
           q=(i+1<=j-1)?dp[i+1][j-1]:0;
           r=(i<=j-2)?dp[i][j-2]:0;

           dp[i][j]=max(a[i]+min(p,q),a[j]+min(q,r));

        }
    }




    cout<<dp[0][k-1];}




}
