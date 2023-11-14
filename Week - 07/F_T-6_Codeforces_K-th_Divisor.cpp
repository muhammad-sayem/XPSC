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
int main()
{
    fastIO;

    ll n, k, i;
    cin >> n >> k;
    vector<ll> v;

    for(i=1; i*i<=n; i++){
        if(n%i == 0){
            v.pb(i);
            if((n/i) != i){
                v.pb(n/i);
            }
        }
    }

    sort(v.begin(), v.end());

    if(k > v.size()) cout << -1 << nl;
    else cout << v[k-1] << nl;

    return 0;
}