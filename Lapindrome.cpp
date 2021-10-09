#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define l long
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define ld long double
#define mp make_pair
#define pii pair<int,int>
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1, s2;
        //complete the program
                //complete the program
        char c = 'a';
        int length = s.length();
        int first[26] {0};
        int last[26] {0};
        for (int i = 0; i < length/2; i++)
                ++first[s[i]-'a'];
        
        for (int i = (length+1)/2; i < length; i++)
                 ++last[s[i]-'a'];
        for (int i = 0; i < 26; i++)
        {
            while (first[i]--)
                s1.push_back(c);
            while (last[i]--)
                s2.push_back(c);
            ++c;
        }
        //end of program
       if(s1.compare(s2)==0) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
