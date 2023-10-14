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
        int n, s, r, i;
        cin >> n >> s >> r;

        int maxx = s-r;
        int val = r/(n-1);
        int rem = r%(n-1);

        int a[n+5];

        for(i=1; i<=n-1; i++){
            a[i] = val;
        }

        for(i=1; i<=rem; i++){
            if(a[i] != maxx) a[i]++;
        }

        cout << maxx << " ";

        for(i=1; i<=n-1; i++){
            cout << a[i] << " ";
        }
        cout << endl;

    }

    return 0;
}