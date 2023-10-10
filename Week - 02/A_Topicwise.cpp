// Problem 1: Longest Subarray With Sum K (CodingNinjas) //
/*
#include<bits/stdc++.h>
using namespace;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i = 0, j = 0, maxx = 0;
    long long sum = 0;
    int n = a.size();
        
        while(j<n){
            sum += a[j];
            
            while(sum > k){
                sum -= a[i];
                i++;
            }
            
            if(sum == k){
                maxx = max(maxx, j-i+1);
            }
            
            j++;
        }
        
        return maxx;
    } 
*/

//  ------------------------------------------------------------------ //

// Problem 2: Longest Sub-Array with Sum K (GeeksforGeeks) //

/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int i, sum = 0;
        
        map<int, int> mp;
        int maxx = 0;
        
        for(i=0; i<n; i++){
            sum += a[i];
            
            if(sum == k){
                maxx = max(maxx, i+1);
            }
            

            if(mp.find(sum - k) != mp.end()){
                maxx = max(maxx, i - mp[sum - k]);
            }
            
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
            
        }
        
        return maxx;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends

*/

// -------------------------------------------------------------------------- //

// Problem 3: Longest K unique characters substring (GeeksforGeeks) //

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i = 0, j = 0, unq = 0;
        int fre[26] = {0};
        int n = s.size();
        int maxx = -1;
        
        while(j<n){
            fre[s[j]-'a']++;
            
            if(fre[s[j]-'a'] == 1){
                unq++;
            }
            
            while(unq > k){
                fre[s[i]-'a']--;
                
                if(fre[s[i]-'a'] == 0){
                    unq--;
                }
                
                i++;
            }
            
            if(unq == k){
                maxx = max(maxx, j-i+1);
            }
            
            j++;
        }
        
        return maxx;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends





