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

bool isValid(ll n, ll mid){
    if((n-mid) >= 3) return true;
    else return false;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, ans;
        cin >> n;

        if((n%3) == 0) cout << (n/3) << " " << (n/3)+1 << " " << (n/3)-1 << endl;
        else if((n%3) == 1) cout << (n/3) << " " << (n/3)+2 << " " << (n/3)-1 << endl;
        else if((n%3) == 2) cout << (n/3)+1 << " " << (n/3)+2 << " " << (n/3)-1 << endl;
    }
    
    return 0;
}