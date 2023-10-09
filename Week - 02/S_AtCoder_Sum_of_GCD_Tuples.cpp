#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
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

    int n, i, j, k, val1, val2;
    cin >> n;

    ll sum = 0;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            for(k=1; k<=n; k++){
                val1 = gcd(i,j);
                val2 = gcd(val1, k);
                sum += val2;
            }
        }
    }

    cout << sum << endl;

    return 0;
}