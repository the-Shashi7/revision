#include <bits/stdc++.h>
using namespace std;

int main(){
    vector< vector<int> > arr;
    int maxium = INT_MIN;
    arr ={{1,2,3},{3,2,1}};
    cout<<"Rows Length -> "<< arr.size()<<endl;
    cout<<"Columns Length -> "<< arr[0].size()<<endl;

    for (int i = 0; i < arr.size(); i++)
    {   int sums =0;
        for (int j = 0; j < arr[i].size(); j++)
        {
            sums += arr[i][j];
            cout<<sums<<" "<<endl;
        }
        maxium = max(maxium,sums);
    }
    cout<<"Maximum -> "<<maxium;

    return 0;
}