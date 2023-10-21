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
        ll n, q, i, sum = 0, even = 0, odd = 0;
        cin >> n >> q;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];

            if(a[i]%2 == 0) even++;
            else odd++;
        }

        while(q--){
            int x, y;
            cin >> x >> y;

            if(x == 1){
                sum += (y*odd);

                if(y%2 != 0){
                    odd = 0;
                    even = n;
                }
            }

            else{
                sum += (y*even);

                if(y%2 != 0){
                    even = 0;
                    odd = n;
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}