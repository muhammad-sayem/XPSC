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
        int n, i, ans = 0;
        cin >> n;
        int a[n+5];

        map<ll, ll> mp;

        for(i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a, a+n);


        for(i=0; i<n; i++){
            ll val = a[i];
            if(mp[a[i]] != 0){
                ans++;
            }
            while(mp[val] > 0){
                mp[val]--;
                val++;
            }
        }
        cout << ans << endl;

    }

    return 0;
}