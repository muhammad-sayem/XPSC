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

const int mod = 1e9+7;

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, k, i, ans = 1;
        cin >> n >> k;
        
        if(k <= n){
            for(int i=1; i<=k; i++){
                ans *= i;
                ans = ans%mod;
            }
            cout << ans << endl;
        }

        else{
            while(n--){
                ans *= k;
                ans = ans % mod;
                if(k>1){
                    k--;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}