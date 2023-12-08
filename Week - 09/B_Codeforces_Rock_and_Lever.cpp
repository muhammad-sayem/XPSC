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

int binaryLength(int n){
    int cnt = 0;

    while(n!=0){
        n /= 2;                 // n = n>>1;
        cnt++;
    }
    return cnt;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, i, j;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }
        map<ll, ll> mp;

        for(i=0; i<n; i++){
            int len = binaryLength(a[i]);
            mp[len]++;
        }

        ll ans = 0;

        for(auto pair: mp){
            ll val = pair.second;
            ans += (val*(val-1))/2;
        }
        cout << ans << nl;
    }

    return 0;
}