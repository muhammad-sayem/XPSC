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

    string s;
    cin >> s;
    string str;

    int cnt = 0, i;

    while(1){
        ll sum = 0;

        for(i=0; i<s.size(); i++){
            sum += s[i] - '0';
        }

        str = to_string(sum);
            
        if(s.size() == 1){
            break;
        }
        else{
            cnt++;
            s = str;
        }
    }

    cout << cnt << endl;

    return 0;
}