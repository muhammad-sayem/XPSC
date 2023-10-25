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
        string str;
        cin >> str;
        int cnt = 0, i;
        set<int> s;

        for(i=0; i<str.size(); i++){
            s.insert(str[i]);
            if(s.size() > 3){
                cnt++;
                s.clear();
                i--;
            }
        }
        if(s.size() == 0) cout << cnt << endl;
        else cout << cnt+1 << endl;
    }

    return 0;
}