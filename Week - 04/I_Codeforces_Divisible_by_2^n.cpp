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
        ll n, i, currCnt;
        cin >> n;
        ll a[n+5];
        ll cnt = 0;

        for(i=1; i<=n; i++){
            cin >> a[i];

            while(a[i]%2 == 0){
                cnt++;
                a[i] /= 2;
            }
        }

        vector<ll> v;

        for(i=1; i<=n; i++){
            ll curr = i;
            currCnt = 0;

            while(curr%2 == 0){
                currCnt++;
                curr /= 2;
            }

            if(currCnt > 0){
                v.pb(currCnt);
            }
        }
        
        if(cnt >= n){
            cout << 0 << endl;
        }

        else{
            ll res = 0, ans;
            sort(v.begin(), v.end(), greater<ll>());
            bool flag = false;

            for(i=0; i<v.size(); i++){
                cnt += v[i];
                res++;

                if(cnt >= n){
                    ans = res;
                    flag = true;
                    break;
                }
            }
            if(flag) cout << res << endl;
            else cout << -1 << endl;
        }
    }

    return 0;
}