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
        int n, i, alice = 0, bob = 0;
        cin >> n;

        string s;
        cin >> s;

        bool a = true;
        bool b = false;

        for(i=0; i<s.size(); i++){
            if(a && s[i] == 'A'){
                alice++;
                a = true;
                b = false;
            }
            else if(a && s[i] == 'B'){
                a = false;
                b = true;
            }

            else if(b && s[i] == 'B'){
                bob++;
                b = true;
                a = false;
            }
            else if(b && s[i] == 'A'){
                b = false;
                a = true;
            }
        }
 
        cout << alice << " " << bob << endl;

    }


    return 0;
}