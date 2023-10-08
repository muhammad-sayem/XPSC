// Problem 1: Max Sum Subarray of size K (GeeksforGeeks) //

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long i = 0, j = 0, sum = 0;
        long maxx = INT_MIN;
        
        while(j<N){
            sum += Arr[j];
            
            if(j >= K-1){
                maxx = max(maxx, sum);
                sum -= Arr[i];
                i++;
            }
            j++;
        }
        
        return maxx;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends

// --------------------------------------------------------------------- //

/*
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        long i = 0, j = 0, sum = 0;
        for(i=0; i<k; i++){
            sum += Arr[i];
        }
        
        long maxx = sum;
        
        i = 0;
        j = k;
        
        while(j<N){
            sum += Arr[j];
            sum -= Arr[i];
            
            maxx = max(maxx, sum);
            
            i++;
            j++;
        }
        
        return maxx;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
*/

// --------------------------------------------------------------------- //

// Problem 2: First negative integer in every window of size k (GeeksforGeeks) //

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[], long long int n, long long int k) {
        
        vector<long long> v;
        int i = 0, j = 0;
        queue<long long> q;
        
        while(j<n){
            if(A[j] < 0){
                q.push(A[j]);
            }
            
            if(j >= k-1){
                if(!q.empty()){
                    v.push_back(q.front());
                }
                else{
                    v.push_back(0);
                }
                
                if(A[i] < 0){
                    q.pop();
                }
                i++;
            }
            j++;
        }
        
        return v;
}

// --------------------------------------------------------------------- //

// Problem 3: Count Occurences of Anagrams (GeeksforGeeks) //

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string s) {
	    int k = p.size();
	    
	    int frp[26] = {0};
	    
	    for(char ch: p){
	        frp[ch - 'a']++;
	    }
	    
	    int i=0, j=0, cnt = 0; 
	    
	    int frs[26] = {0};
	    
	    while(j<s.size()){
	        frs[s[j]-'a']++;
	        
	        if(j>=k-1){
	            bool flag = true;
	            
	            int x = 0;
	            
	            for(x=0; x<26; x++){
	                if(frp[x] != frs[x]){
	                    flag = false;
	                    break;
	                }
	            }
	            
	            if(flag) cnt++;
	            frs[s[i]-'a']--;
	            i++;
	        }
	        
	        j++;
	    }
	    
	    return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends