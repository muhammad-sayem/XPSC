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
        int n, i, k;
        cin >> n;

        string s;
        cin >> s;

        ll ans = 0;

        for(i=0; i<s.size(); i++){
            if(s[i] == 'L') ans += i;
            else ans += n-i-1;
        }

        ll change[n+5];

        for(i=0; i<s.size(); i++){
            if(s[i] == 'L'){
                change[i] = n-i-1-i;
            }
            else {
                change[i] = i-(n-1-i);
            }
        }

        sort(change, change+n, greater<ll>());

        // for(i=0; i<n;i++){
        //     cout << change[i] << " ";
        // }
        // cout << endl;

        for(k=1; k<=n; k++){
            if(change[k-1] > 0){
                ans += change[k-1];
            }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}