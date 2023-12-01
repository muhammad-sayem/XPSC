#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      ll              long long
#define      pb              push_back
#define      pii             pair <ll,ll>
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

    ll test;
    cin >> test;

    while(test--){
        ll n, i;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        ll maxErMin = 1e9, pos;

        for(i=1; i<n-1; i++){
            ll val = max(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
            maxErMin = min(maxErMin, val);
        }

        maxErMin = min(maxErMin, abs(a[0]-a[1]));
        maxErMin = min(maxErMin, abs(a[n-1]-a[n-2]));

        cout << maxErMin << endl;
    }

    return 0;
}