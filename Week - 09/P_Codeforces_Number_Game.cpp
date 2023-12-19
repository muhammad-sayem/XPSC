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


bool isValid(ll a[], ll n, ll k){
    multiset<ll> ms;
    int i;

    for(i=0; i<n; i++){
        ms.insert(a[i]);
    }

    for(i=1; i<=k; i++){
        if(ms.empty()){
            return false;
        }

        ll req = k-i+1;

        auto x = ms.upper_bound(req);
        if(x == ms.begin()){
            return false;
        }
        x--;

        ms.erase(x);

        if(!ms.empty()){
            x = ms.begin();
            ll val = (*x);
            val += (req);
            ms.erase(x);
            ms.insert(val);
        }
    }

    return true;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, i;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        int ans;
        ll l = 0, r = n;

        while(l<=r){
            ll mid = l+(r-l)/2;

            if(isValid(a, n, mid)){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout << ans << nl;
    }


    return 0;
}