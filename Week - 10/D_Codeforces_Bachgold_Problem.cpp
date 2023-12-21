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

    int n, i;
    cin >> n;

    cout << n/2 << nl;

    if(n%2 == 0){
        for(i=1; i<=n/2; i++){
            cout << 2 << " ";
        }
        cout << nl;
    }

    else{
        for(i=1; i<=(n/2)-1; i++){
            cout << 2 << " ";
        }
        cout << 3 << nl;
    }

    return 0;
}