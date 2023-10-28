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

    int test;
    cin >> test;

    while(test--){
        ll n, h, i, ans = 0;
        cin >> n >> h;
        ll a[n+5];

        a[0] = 0;

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        for(i=1; i<=n; i++){
            a[i] = a[i] + a[i-1];
        }

        ll l = 1;
        ll r = n;

        while(l<=r){
            ll mid = (l+r)/2;

            if(h - a[mid-1] <= a[mid] - a[mid-1]){
                ans = n-mid+2;
                break;
            }
            else if(h - a[mid-1] > a[mid] - a[mid-1]){
                l = mid+1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}