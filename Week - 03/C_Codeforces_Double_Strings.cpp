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
        int n, i, j, k;
        cin >> n;
        string s[n+5];

        map<string, bool> mp;

        for(i=0; i<n; i++){
            cin >> s[i];
            mp[s[i]] = true;
        }

        string ans;

        for(i=0; i<n; i++){
            string s1;
            bool flag = false;
            for(j=0; j<s[i].size()-1; j++){
                
                s1 += s[i][j];

                string s2;
                for(k=j+1; k<s[i].size(); k++){
                    s2 += s[i][k];
                }

                if(mp[s1] && mp[s2]) flag = true;
            }
            if(flag) ans.pb('1');
            else ans.pb('0');
        }

        cout << ans << endl;
    }

    return 0;
}