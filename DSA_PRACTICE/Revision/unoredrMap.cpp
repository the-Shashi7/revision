#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    /* unordered_map<string , int> ourMap;
    pair<string ,int> p("abc",1);
    ourMap.insert(p);

    ourMap["def"] = 2;

    cout<<ourMap["def"]<<endl;
    cout<<ourMap.at("def")<<endl;
    cout<<ourMap["abc"]<<endl;
    cout<<ourMap.at("abc") <<endl;

    ourMap["ghi"];

    if (ourMap.count("ghi")>0)
    {
        cout<<"ghi is present "<< ourMap.at("ghi") <<endl;
    } */
    unordered_map<string , int> ourMap;

    ourMap["abc"] = 1;
    ourMap["abd"] = 2;
    ourMap["abe"] = 3;
    ourMap["abf"] = 4;
    ourMap["abg"] = 5;

    unordered_map<string, int>::iterator it = ourMap.begin();
    while (it !=ourMap.end())
    {
        cout<<"key : "<<it->first<<" value : "<<it->second<<endl;
        it++;
    }
    


    
}