#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long, long long>
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

    ll x, y;
    cin >> x >> y;
    vector<ll> v;
    ll i = 1;
    v.pb(x);

    while(true){
        if(x >= y){
            break;
        }
        x *= 2;
        v.pb(x);
        i++;
    }

    if(v[v.size()-1] == y) cout << v.size() << endl;
    else cout << v.size()-1 << endl;

    return 0;
}