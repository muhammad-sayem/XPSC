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
        int i, zeroPos = -1, onePos = -1, qstn = 0;

        for(i=0; i<s.size(); i++){
            if(s[i] == '1'){
                onePos = i;
            }
            if(s[i] == '?'){
                qstn++;
            }
        }

        if(qstn == s.size()) cout << s.size() << endl;
        
        else if(onePos == -1){
            int temp;
            for(i=0; i<s.size(); i++){
                if(s[i] == '0'){
                    temp = i+1;
                    break;
                }
            }
            cout << temp << endl;
        }

        else{
            for(i=onePos+1; i<s.size(); i++){
                if(s[i] == '0'){
                    zeroPos = i;
                    break;
                }
            }
            if(zeroPos == -1) cout << s.size() - onePos << endl;  
            else cout << zeroPos - onePos + 1 << endl;  
        }
    }

    return 0;
}