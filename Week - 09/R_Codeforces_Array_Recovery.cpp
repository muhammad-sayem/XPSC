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
        ll n, i;
        cin >> n;
        ll a[n+5];
        vector<ll> v;

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        v.pb(a[1]);

        ll val1 = a[1];
        ll val2 = a[1];

        bool flag = true;

        for(i=2; i<=n; i++){
            val1 += a[i];
            val2 -= a[i];

            //cout << "Val1: " << val1 <<  " " << "Val2: " << val2 << nl;

            if(val1 >= 0 && val2 >= 0 && val1 != val2){
                flag = false;
                break;
            }
            else{
                v.pb(val1);
                val2 = val1;
            }
        }

        if(!flag) cout << -1 << nl;
        else{
            for(auto val: v){
                cout << val << " ";
            } 
            cout << nl;
        }
    }

    return 0;
}