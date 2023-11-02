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
        int n, i, j;
        cin >> n;
        int a[n+5];
        int pre[n+5];

        pre[0] = 0;

        for(i=1; i<=n; i++){
            cin >> a[i];
            pre[i] = a[i];
        }

        for(i=1; i<=n; i++){
            pre[i] = pre[i] + pre[i-1];
        }

        int ans = n;

        for(i=1; i<=n; i++){
            int res = i;
            int k = i;

            for(j=i+1; j<=n; j++){
                if(pre[j] == pre[i] + pre[k]){
                    res = max(res, j-k);
                    k = j;
                }
            }

            if(k == n){
                ans = min(res, ans);
            }
        }
        cout << ans << endl;
    }

    return 0;
}