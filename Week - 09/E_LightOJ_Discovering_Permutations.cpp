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

    int test, x;
    cin >> test;

    for(x=1; x<=test; x++){
        cout << "Case " << x << ": " << nl;

        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        int n, k, i;
        cin >> n >> k;
        string s;

        for(i=0; i<n; i++){
            s.pb(str[i]);
        }
        
        ll cnt = 0;

        do{
            cnt++;
            cout << s << nl;
            if(cnt == k) break;
        }while(next_permutation(s.begin(), s.end()));
    }

    return 0;
}