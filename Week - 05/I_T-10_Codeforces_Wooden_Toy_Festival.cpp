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

bool isPossible(ll a[], ll n, ll diff){
    int cnt = 1;

    ll l = 0;
    ll r = l+1;

    while(r<n){
        if((a[l] + diff + diff) >= a[r]){
            r++;
        }
        else{
            cnt++;
            l = r;
            r = l;
        }
    }

    if(cnt <= 3) return true;
    else return false;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, i, ans;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);

        ll l = 0;
        ll r = 1e18;

        while(l<=r){
            ll mid = l + (r-l)/2;

            if(isPossible(a, n, mid)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}