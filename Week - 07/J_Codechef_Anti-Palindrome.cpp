#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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
        int n, i;
        cin >> n;
        
        string s;
        cin >> s;

        int fre[26] = {0};

        for(i=0; i<n; i++){
            fre[s[i]-'a']++;
        }

        int letters = 0, even = 0, odd = 0;

        for(i=0; i<26; i++){
            if(fre[i]>0) letters++;
            if((fre[i] > 0) && fre[i]%2 == 0) even++;
            else if(fre[i]%2 != 0) odd++;
        }

        if(letters == 1){
            if(!(n&1)) cout << 1 << nl;
            else cout << 2 << nl;
        }

        else{
            if(n&1){
                if(odd == 1) cout << 1 << nl;
                else cout << 0 << nl;
            }
            else{
                if(odd == 0) cout << 1 << nl;
                else if(odd == 1) cout << 1 << nl;
                else cout << 0 << nl;
            }
        }
    }

    return 0;
}