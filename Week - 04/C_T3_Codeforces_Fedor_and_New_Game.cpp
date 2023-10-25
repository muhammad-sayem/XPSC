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

    ll n, m, k, i;
    cin >> n >> m >> k;
    ll a[m+5];
    
    for(i=0; i<m+1; i++){
        cin >> a[i];
    }

    ll ans = 0;

    for(i=0; i<m; i++){
        ll val = a[i]^a[m];
        ll cnt = 0;

        while(val > 0){
            int bit = val&1;
            val = val >> 1;
            if(bit == 1) cnt++;
        }

        if(cnt <= k) ans++;
    }
    cout << ans << endl;

    return 0;
}