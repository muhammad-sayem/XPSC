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
        ll n, k, l, i;
        cin >> n >> k >> l;

        vector<ll> v;

        while(n--){
            ll M, L;
            cin >> M >> L;

            if(L == l) v.pb(M);
        }

        if(v.empty()) cout << -1 << endl;
        
        else{
            sort(v.begin(), v.end(), greater<ll>());

            ll size = v.size();

            if(k <= size) {
                ll sum = 0;

                for(i=0; i<k; i++){
                    sum += v[i];
                }

                cout << sum << endl;
            }

            else{
                cout << -1 << endl;
            }
        }
    }

    return 0;
}