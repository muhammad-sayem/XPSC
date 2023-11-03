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
        string s;
        cin >> s;
        int n = s.size(), i;

        char maxx = max(s[0], s[n-1]);
        char minn = min(s[0], s[n-1]);

        vector<pair<char, int>> v;
        string str;
        str.pb(s[0]);

        for(i=1; i<n-1; i++){
            if(s[i] >= minn && s[i] <= maxx){
                v.pb({s[i], i+1});
                str.pb(s[i]);
            }
        }
        str.pb(s[n-1]);

        sort(str.begin()+1, str.end()-1);
        sort(v.begin(), v.end());

        if(s[0] > s[n-1]){
            reverse(str.begin()+1, str.end()-1);
            reverse(v.begin(), v.end());
        }

        ll jumps = str.size();
        ll cost = 0;

        for(i=0; i<str.size()-1; i++){
            cost += abs(str[i] - str[i+1]);
        }
        
        cout << cost << " " << jumps << endl;
        
        cout << 1 << " ";

        for(auto pair: v){
            cout << pair.second << " ";
        }
        cout << n << endl;

        // cout << str << endl;

        // for(auto pair: v){
        //     cout << pair.first << " " << pair.second << endl;
        // }
        // cout << endl;
    }

    return 0;
}