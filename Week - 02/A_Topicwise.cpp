// Problem 1: Longest Subarray With Sum K (CodingNinjas) //
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