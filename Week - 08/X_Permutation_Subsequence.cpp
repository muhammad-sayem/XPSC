#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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

const ll mod = 1e9+7;

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        int n, i;
        cin >> n;
        int a[n+5];

        map<int, int> mp;

        for(i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        ll ans = 0;
        ll x = 1;

        for(i=1; i<=n; i++){
            ll temp = mp[i]*x;
            temp %= mod;

            ans += temp;
            x = temp;
            ans %= mod;
        }
        cout << ans << nl;
    }

    return 0;
}