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
        int n, i;
        cin >> n;

        string s;
        cin >> s;
 
        string str;

        int val;

        for(i=s.size()-1; i>=0; i--){
            if(s[i] != '0'){
                val = s[i]-'0';
                char ch = val+96;
                str += ch; 
            }
            else{
                val = (s[i-2]-'0')*10 + (s[i-1]-'0');
                char ch = val+96;
                str += ch;
                i -= 2;
            }

            //cout << val << endl;
        }
        reverse(str.begin(), str.end());
        cout << str << endl;

    }

    return 0;
}