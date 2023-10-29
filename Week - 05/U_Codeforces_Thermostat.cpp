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
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if(a==b) cout << 0 << endl;

        else if(a<b){
            if((b-a) >= x) cout << 1 << endl;
            else if((r-b) >= x) cout << 2 << endl;
            else if((a-l) >= x) cout << 2 << endl;
            else if((r-a) >= x && (b-l) >= x) cout << 3 << endl;
            else cout << -1 << endl;
        }

        else{
            if((a-b) >= x) cout << 1 << endl;
            else if((r-a) >= x) cout << 2 << endl;
            else if((b-l) >= x) cout << 2 << endl;
            else if((r-b) >= x && (a-l) >= x) cout << 3 << endl;
            else cout << -1 << endl;
        }
    }

    return 0;
}