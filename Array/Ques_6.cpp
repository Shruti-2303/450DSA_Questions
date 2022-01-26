//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    //Approach 1.
    int doUnion(int a[], int n, int b[], int m)  {
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp.insert({a[i],i});
        }
        for(int i=0;i<m;i++)
        {
            mp.insert({b[i],i});
        }
        return mp.size();
    }
    //Approach 2.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        return s.size();
    }
    //Intersection
    void printIntersection(int a[], int n, int b[], int m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]<b[j])
                    i++;
                else if(a[i]>b[j])
                    j++;
                else
                    cout<<b[j]<<" ";
                    i++;
                    j++;
            }
        }
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends