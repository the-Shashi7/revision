#include<iostream>
using namespace std;
#include<vector>
typedef long long ll;

int solve(){
    ll n , k ;
    cin>>n>>k;
    string s;
    cin>>s;
    string a;

    for (int  i = 0; i < s.size(); ++i)
    {
        a+=((58-s[i])%10+48);
    }
    ll total = 0;
    ll prev = (a[0] - 48) %10;
    total += prev;
    vector<ll> totals;

    for (int i = 1; i < s.size(); i++)
    {
        totals.push_back(total);
        if(k<0) {
            break;
        }
        ll curr = ((a[i]-48))%10;
        if (curr>prev)
        {
            total += 10;
        }
        prev = curr;
    }
    totals.push_back(total);
    ll i = 0;
    for(auto &a : ll &: totals)
    {
        if (a>k)
        {
            break;
        }
        i++;
    }
    cout<<i<<endl;
}

int main(){
    int t; 
    cin>>t;
    while (t--)
    {
        solve();
    }
}