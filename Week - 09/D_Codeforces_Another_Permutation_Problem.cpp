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
        ll n, i, j, k;
        cin >> n;

        vector<ll> v1(n+1);
        vector<ll> v2(n+1);

        for(i=1; i<=n; i++){
            v1[i] = i;
        }

        v2 = v1, j = 1;
        ll maxx = -1e18;

        for(i=1; i<n; i++){
            sort(v1.begin()+j, v1.end(), greater<int>());

            ll sum = 0;
            ll maxElement = -1e18;

            for(k=1; k<=n; k++){
                ll val = k*v1[k];
                sum += val;
                maxElement = max(maxElement, val);
            }

            sum -= maxElement;
            maxx = max(maxx, sum);
            v1 = v2;
            j++;
        }
        cout << maxx << nl;
    }

    return 0;
}