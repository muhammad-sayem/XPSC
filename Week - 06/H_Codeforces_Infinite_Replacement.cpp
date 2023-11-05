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

        string t;
        cin >> t;

        if(t == "a") cout << 1 << endl;
        else{
            bool flag = true;

            for(int i=0; i<t.size(); i++){
                if(t[i] == 'a'){
                    flag = false;
                    break;
                }
            }

            if(!flag) cout << -1 << endl;
            else {
                ll ans = pow(2, s.size());
                cout << ans << endl;
            }
        }
    }

    return 0;
}