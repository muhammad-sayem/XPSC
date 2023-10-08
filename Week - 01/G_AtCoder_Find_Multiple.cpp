#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long, long long>
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

    ll a, b, c, i, value;
    cin >> a >> b >> c;
    vector<int> v;
    bool flag = false;

    for(i=1; i<=1005; i++){
        if(c*i > 1000) break;
        v.pb(c*i);
    }

    for(int val: v){
        if(val >= a && val <= b){
            flag = true;
            value = val;
            break;
        } 
    }

    if(!flag) cout << -1 << endl;
    else cout << value << endl;
    
    return 0;
}