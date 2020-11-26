#include<bits/stdc++.h>
using namespace std;
#define MAX                   1e9
#define PrintA(a,m, n)        for(int i=m;i<n;i++) cout<<a[i]<<" ";cout<<endl;

#define InputA(a,n)           for(int i=0;i<n;i++)cin>>a[i];

#define InputV(a,n)           for(int i=0;i<n;i++)int p;cin>>p;  a.push_back(p);

#define PrintV(a)             for(auto x:a) cout<<x<<" ";cout<<endl;
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
void solve(ll n)
{
    ll sum= n*(n+1)/2;
    vector<ll> s1;
    vector<ll> s2;

    if(sum%2!=0)
    {
        cout<<"NO";
    }

    else if(n%2==0)
    {
        ll s=1;
        ll e=n;
        ll t=1;
        while(s<=e)
        {
            if(t)
            {


            s1.push_back(s);
            s1.push_back(e);
            t=0;
            }
            else
                {
                   s2.push_back(s);
                    s2.push_back(e);
                    t=1;}
            s++;
            e--;


        }
        cout<<"YES"<<endl;
        cout<<s1.size()<<endl;
        PrintV(s1);
        cout<<s2.size()<<endl;
        PrintV(s2);


    }

    else if(n%2!=0)
    {
        ll e=n;
        sum=sum/2;
        //s1.push_back(e);

        while(e>=1)
        {
            if(e<=sum)
            {
                s1.push_back(e);
                sum=sum-e;
            }
            else{s2.push_back(e);}
            e--;
        }
        cout<<"YES"<<endl;
        cout<<s1.size()<<endl;
        PrintV(s1);
        cout<<s2.size()<<endl;
        PrintV(s2);

    }

}

int main()
{
    ll n;
    cin>>n;
    solve(n);

}
