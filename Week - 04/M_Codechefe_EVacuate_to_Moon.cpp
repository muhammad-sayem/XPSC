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
    
    int test;
    cin >> test;

    while(test--){
        ll n, m, h, i;
        cin >> n >> m >> h;
        ll a[n+5];
        ll b[m+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<m; i++){
            cin >> b[i];
        }

        sort(a, a+n, greater<ll>());
        sort(b, b+m, greater<ll>());

        ll minn = min(n, m);
        ll ans = 0;

        for(i=0; i<minn; i++){
            ll val = b[i]*h;
            ans += min(val, a[i]);
        }
        cout << ans << endl;
    }

    return 0;
}