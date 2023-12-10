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
        int n, i, j;
        cin >> n;
        int num = n*n;
        vector<int> v;

        int x = 1, y = num, cnt = 0, track = 1;

        while(x<=y){
            v.pb(x);
            v.pb(y);
            x++;
            y--;
        }
        if(n%2 != 0) v.pop_back();

        x = 0;

        for(i=1; i<=n; i++){
            if(i%2 != 0){
                for(j=x; j<x+n; j++){
                    cout << v[j] << " ";
                }
                x += n;
                cout << nl;
            }
            else{
                for(j=(n+x)-1; j>=x; j--){
                    cout << v[j] << " ";
                }
                x += n;
                cout << nl;
            }
        }
    }

    return 0;
}