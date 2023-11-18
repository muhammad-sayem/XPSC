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
        ll num = (n*(n-1))/2;
        ll a[num+5];

        for(i=1; i<=num; i++){
            cin >> a[i];
        }

        sort(a+1, a+num+1);
        vector<ll> v;
        i = 1;
        ll val = 0;

        while(i != n){
            val += n-i;
            v.pb(a[val]);
            i++;
        }

        for(auto val: v){
            cout << val << " ";
        }
        cout << v[v.size()-1] << endl;
    }

    return 0;
}