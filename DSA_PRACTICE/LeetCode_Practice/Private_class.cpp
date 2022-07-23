#include <bits/stdc++.h>
#include <vector>
using namespace std;

/* class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter binary number :-> " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Enter value is not a binary " << endl;
            break;
        }
    }
}

void binary::display(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
} */

int main()
{
    // binary s;
    // s.read();
    // s.display();

    // int size;
    /* cin>>size;

    string *names = new string[size];

    for (int i = 0; i < size; i++)
    {
        cin>>names[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout<<names[i]<<endl;
    } */

    // cout<<(*size);

    /*  string s;
     int k;
     s = "00110110", k = 2;
     if (s.length() < k)
         return false;

     unordered_map<string, int> Map;

     for (int i = 0; i <= s.length() - k; i++)
     {
         string str = s.substr(i, k);

         Map[str]++;
     }

     for (auto x : Map)
       cout << x.first << " " << x.second << endl;

     return Map.size() == pow(2, k); */

    string s;
    s = "My name is shashi";

    int len = s.size() - 1;
    int count = 0;

    while(len>0)
    {   
        cout << s[len]<<endl;
        len--;
    }
    return 0;
}