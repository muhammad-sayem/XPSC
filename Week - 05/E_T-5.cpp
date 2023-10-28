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

ll sumOfDigits(ll n){
    string s = to_string(n);
    ll sum = 0;
    for(int i=0; i<s.size(); i++){
        sum += s[i]-'0';
    }
    return sum;
}

int main()
{
    fastIO;

    ll n, s, i;
    cin >> n >> s;

    if(n - sumOfDigits(n) < s){
        cout << 0 << endl;
        return 0;
    }

    ll l = 1;
    ll r = n;
    ll lowestReallyBigNumber;

    while(l <= r){
        ll mid = l + (r-l)/2;

        if(mid - sumOfDigits(mid) >= s){
            lowestReallyBigNumber = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    cout << n - lowestReallyBigNumber + 1 << endl;

    return 0;
}