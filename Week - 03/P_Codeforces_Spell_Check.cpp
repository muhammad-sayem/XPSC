#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
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
        int n, j, t = 0, i = 0, m = 0, u = 0, r = 0;
        cin >> n;
        cin.ignore();

        string s;
        cin >> s;

        for(j=0; j<s.size(); j++){
            if(s[j] == 'T') t++;
            if(s[j] == 'i') i++;
            if(s[j] == 'm') m++;
            if(s[j] == 'u') u++;
            if(s[j] == 'r') r++;
        }

        if(n == 5 && t == 1 && i == 1 && m == 1 && u == 1 && r == 1) cout << yes << endl;
        else cout << no << endl;
    }
    
    return 0;
}