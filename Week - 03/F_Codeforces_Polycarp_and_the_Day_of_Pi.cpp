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

    string str = "314159265358979323846264338327";

    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;

        int i, cnt = 0;
        
        for(i=0; i<s.size(); i++){
            if(s[i] == str[i]) cnt++;
            else break;
        }

        cout << cnt << endl;
    }

    return 0;
}