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

    int test;
    cin >> test;

    while(test--){
        ll t, i;
        cin >> t;

        vector<ll> v1;
        vector<ll> v2;

        while(t--){
            ll n;
            cin >> n;
            ll a[n+5];

            for(i=0; i<n; i++){
                cin >> a[i];
            }

            sort(a, a+n);

            v1.pb(a[0]);
            v2.pb(a[1]);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        ll sum = 0;

        for(i=1; i<v2.size(); i++){
            sum += v2[i];
        }
        sum += v1[0];

        cout << sum << nl;
    }

    return 0;
}