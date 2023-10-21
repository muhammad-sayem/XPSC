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
        int n, i, j;
        cin >> n;

        char ch;
        cin >> ch;

        string s;
        cin >> s;

        s += s;

        ll cnt = 0, ans = 0;

        for(i=s.size()-1; i>=0; i--){
            if(s[i] == 'g'){
                cnt = 0;
            }
            else if(s[i] == ch){
                cnt++;
                ans = max(cnt, ans);
            }
            else{
                cnt++;
            }
        }
        cout << ans << endl;

    }

    return 0;
}