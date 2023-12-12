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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a == 0) cout << 1 << nl;
        else{
            ll sum = 0;

            ll minn = min(b, c);
            ll maxx = max(b, c);
            ll val = maxx - minn;
            ll temp = val + d;

            sum += a;
            sum += (minn*2);

            if(temp >= (a+1)){
                sum += a+1;
            } 

            else{
                sum += temp;
            }

            cout << sum << nl;
        }
    }

    return 0;
}