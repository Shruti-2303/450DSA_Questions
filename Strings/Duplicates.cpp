// C++ program to count all duplicates
// from string using maps
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    map<char,int> mp;
    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }
    for(auto it:mp)               //O(NlogN)
    {
        if(it.second>1)
            cout<<it.first<<it.second<<endl;
    }
}
/* Driver code*/
int main()
{
	string str = "test string";
	printDups(str);
	return 0;
}
// This code is contributed by yashbeersingh42
