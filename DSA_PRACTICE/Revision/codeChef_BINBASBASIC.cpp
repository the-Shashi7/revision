#include <iostream>
using namespace std;

int palidrome(string s)
{
    int count = 0; int l = 0; int r = s.length() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            count++;
        }
        r--;
        l++;
    }
    return count;
}

int main()
{
    int t, n, k;
    cin >> t;
    while (t--!= 0)
    {
        cin >> n >> k;
        string s;
        cin >> s;
        if(palidrome(s) <= k){
            if((k > palidrome(s) && (k-palidrome(s))%2 == 0) || k == palidrome(s)){
                cout<<"YES"<<endl;
            }
            else if((k - palidrome(s))%2 == 1){
                if(palidrome(s)%2 == 1){
                cout<<"YES"<<endl;
                }
            }
            else{
               cout<<"NO"<<endl; 
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
