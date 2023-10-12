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

bool isPalindrome(string s1){
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    if(s1 == s2) return true;
    else return false;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;

        int x;
        cin >> x;

        int h = x/60;
        int m = x%60;

        int ans = 0;

        map<string, bool> visited;

        while(!visited[s]){
            if(isPalindrome(s)) ans++;
            visited[s] = true;

            int hh = ((s[0]-'0')*10) + (s[1]-'0');
            int mm = ((s[3]-'0')*10) + (s[4]-'0');

            mm += m;

            if(mm > 59){
                hh++;
            }

            mm = mm%60;

            hh += h;
            hh = hh%24;

            s[0] = ('0' + (hh/10));
            s[1] = ('0' + (hh%10));

            s[3] = ('0' + (mm/10));
            s[4] = ('0' + (mm%10));

        }
        cout << ans << endl;
    }

    return 0;
}