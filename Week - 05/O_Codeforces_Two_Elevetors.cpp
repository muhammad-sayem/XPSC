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
        ll a, b, c;
        cin >> a >> b >> c;

        ll val1 = a-1;
        ll val2;
        if(b <c) val2 = abs(b-c) + abs(c-1);
        else val2 = abs(b-1);
        
        if(val1 < val2) cout << 1 << endl;
        else if(val1 > val2) cout << 2 << endl;
        else cout << 3 << endl;
    }
    
    return 0;
}