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
        char ch[9][9];
        int i, j;
        
        for(i=1; i<=8; i++){
            for(j=1; j<=8; j++){
                cin >> ch[i][j];
            }
        }

        int pos_i;
        int pos_j;

        for(i=1; i<=8; i++){
            for(j=1; j<=8; j++){
                if(ch[i][j] == '#'){
                    if(ch[i-1][j+1] == '#' && ch[i-1][j-1] == '#' && ch[i+1][j-1] == '#' && ch[i+1][j+1] == '#'){
                        pos_i = i;
                        pos_j = j;
                        break;
                    }
                }
            }
        }

        cout << pos_i << " " << pos_j << endl;
    }

    return 0;
}