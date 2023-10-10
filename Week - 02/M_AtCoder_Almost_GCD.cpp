#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;
 
    int n, i, j;
    cin >> n;
    int a[n+5];
 
    for(i=0; i<n; i++){
        cin >> a[i];
    }
 
    sort(a, a+n);
 
    int k = a[n-1];
 
    int cnt = 0, maxx = 0, ans = 1;
    // cout << endl;
 
    for(i=2; i<=k; i++){
 
        for(j=0; j<n; j++){
            if(a[j]%i == 0){
                cnt++;
            }
            // cout << cnt2 << " ";
        }
        // cout << endl;
 
        if(cnt > maxx){
            ans = i;
            maxx = cnt;
        }
        cnt = 0;
    }
    
    cout << ans << endl;
 
    return 0;
}