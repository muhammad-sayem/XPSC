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
        int n, m, i, j, k;
        cin >> n >> m;

        string s[n+5];

        for(i=0; i<n; i++){
            cin >> s[i];
        }

        ll minn = LLONG_MAX;

        for(i=0; i<n-1; i++){

            for(j=i+1; j<n; j++){
                ll sum = 0;

                for(k=0; k<m; k++){
                    if(s[i][k] != s[j][k]){
                        sum += abs(s[i][k] - s[j][k]);
                    }
                }
                minn = min(minn, sum);
            }
        }
        cout << minn << endl;
    }

    return 0;
}