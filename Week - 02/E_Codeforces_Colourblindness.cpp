#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
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
        cin.ignore();

        string s1;
        string s2;

        cin >> s1;
        cin >> s2;

        for(i=0; i<s1.size(); i++){
            if(s1[i] == 'B') s1[i] = 'G';
            if(s2[i] == 'B') s2[i] = 'G';
        }

        if(s1 == s2) yes;
        else no;

    }

    return 0;
}