//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends
//User function Template for C++
//Approach 1.
string reverseWord(string str){
    
  int low=0,high=str.length()-1;
  char temp;
  while(low<high)
  {
      temp = str[low];
      str[low] = str[high];
      str[high] = temp;
      low++;
      high--;
  }
  return str;
}

//Approach 2.
string reverseWord(string str){
    string final;
    for(int i=str.size()-1;i>=0;i--)
    {
        final.push_back(str[i]);
    }
    return final;
}

//Approach 3.
string reverseWord(string str){
    string s="";
    for(int i=str.size()-1;i>=0;i--)
    {
        s = s + str[i];
    }
    return s;
}