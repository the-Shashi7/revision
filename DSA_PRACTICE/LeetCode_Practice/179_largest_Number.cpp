#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3,num = 2932;
    vector<int> temp_array(4);
    while (n >= 0)
    {
        temp_array[n--] = num % 10;
        num /= 10;
    }
    sort(temp_array.begin(), temp_array.end());
    cout<<(temp_array[0] * 10 + temp_array[3] + temp_array[1] * 10 + temp_array[2]);
    return 0;
}