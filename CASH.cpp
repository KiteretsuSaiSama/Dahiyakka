#include<bits/stdc++.h>
using namespace std;
 int main()
{
    long int t,n; cin>>t;
    while(t--)
    { long long int s=0;
        long int k,r=0;
        cin>>n;
        cin>>k;
        long int a[n];
        for(long int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        r=s%k;
        cout<<r<<endl;
    }
    return 0;
}
