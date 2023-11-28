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
        ll n, i, a = 1, b = 2, c = 0, d = 0;
        cin >> n;

        if(n == 0) cout << 4 << " " <<6 << " " << 3 <<" " << 7 << nl;
        else{
            for(i=3; i<=100000; i++){
                // ll curr = n^i;

                if((n^i) != i && (n^i) > 2){
                    c = i;
                    d = n^i;
                    break;
                }
            }
            if(c == 0) cout << -1 << nl;
            else cout << a << " " << b << " " << c << " " << d << nl;

        }
    }

    return 0;
}