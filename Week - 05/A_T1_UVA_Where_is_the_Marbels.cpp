#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
    int n, q, i, t = 1;

    while(cin >> n >> q){
        if(n == 0 && q == 0) break;
        
        cout << "CASE# " << t << ":" << endl;

        int a[n+5];
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);

        while(q--){
            int x, ans = -1;
            cin >> x;

            int l = 0;
            int r = n-1;

            while(l<=r){
                int mid = l + (r-l)/2;

                if(a[mid] == x){
                    ans = mid;
                    r = mid-1;
                }
                else if(x < a[mid]){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
      
            if(ans != -1) cout << x << " " << "found at " << ans+1 << endl;
            else cout << x << " " << "not found" << endl;
        }
        t++;

    }

    return 0;
}