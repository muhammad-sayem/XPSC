#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
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

    int k, s, i, j, ans = 0;
    cin >> k >> s;

    for(i=0; i<=k; i++){
        for(j=0; j<=k; j++){
            if(s - (i+j) <= k && s - (i+j) >= 0){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}