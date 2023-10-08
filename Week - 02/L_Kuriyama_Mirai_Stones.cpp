#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
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

    ll n, i;
    cin >> n;
    ll a[n+5];
    ll b[n+5];
    
    a[0] = 0;
    b[0] = 0;

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    for(i=1; i<=n; i++){
        b[i] = a[i];
    }

    sort(b+1, b+n+1);

    for(i=1; i<=n; i++){
        a[i] = a[i-1] + a[i];
        b[i] = b[i-1] + b[i];
    }

    ll m;
    cin >> m;

    while(m--){
        ll type, l, r;
        cin >> type >> l >> r;

        if(type == 1) cout << a[r] - a[l-1] << endl;
        else cout << b[r] - b[l-1] << endl;
    }

    return 0;
}