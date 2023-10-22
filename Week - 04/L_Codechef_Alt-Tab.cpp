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

    int n, i;
    cin >> n;

    vector<string> v;
    vector<string> vec;
    map<string, bool> mp;

    while(n--){
        string str;
        cin >> str;

        v.pb(str);
        mp[str] = true;
    }

    reverse(v.begin(), v.end());

    for(auto ss: v){
        if(mp[ss]) {
            vec.pb(ss);
            mp[ss] = false;
        }
    }

    // for(auto sss: vec){
    //     cout << sss << " ";
    // }

    string ans;

    for(auto sss: vec){
        ans.pb(sss[sss.size()-2]);
        ans.pb(sss[sss.size()-1]);
    }

    cout << ans << endl;

    return 0;
}