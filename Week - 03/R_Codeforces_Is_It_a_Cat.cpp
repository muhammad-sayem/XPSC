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
        cin.ignore();

        string s;
        cin >> s;

        for(i=0; i<s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i]+32;
            }
        }

        bool flag = true;

        if(s[0] != 'm' || s[n-1] != 'w') no;

        else{
            for(i=0; i<n-1; i++){
                if(s[i] == 'm' && s[i+1] == 'e') continue;
                else if(s[i] == 'e' && s[i+1] == 'o') continue;
                else if(s[i] == 'o' && s[i+1] == 'w') continue;
 
                else if(s[i] == 'm' && s[i+1] == 'm') continue;
                else if(s[i] == 'e' && s[i+1] == 'e') continue;
                else if(s[i] == 'o' && s[i+1] == 'o') continue;
                else if(s[i] == 'w' && s[i+1] == 'w') continue;

                else{
                    flag = false;
                    break;
                }
            }

            if(flag) yes;
            else no;
        }
    }
    
    return 0;
}