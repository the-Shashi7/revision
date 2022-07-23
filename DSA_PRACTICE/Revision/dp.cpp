#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;int maxCount = 0;
	s ="abcdeaaaaaaaaaa";
	for (int i = 0; i < s.length(); i++){
		int count = 0; int j = 0; 
		while (s[i] != s[j] && j < s.size())
		{
			count++;
			j++;
		}
		
		maxCount = max(maxCount,count+1);
	}
	cout<<maxCount<<endl;
	return 0; 
}