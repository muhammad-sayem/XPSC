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
        int n, b, i;
        cin >> n >> b;
        int a[n+5];
        vector<int> v;

        for(i=1; i<=n; i++){
            cin >> a[i];

            if((a[i]&b) == b){
                v.pb(a[i]);
            }
        }

        // for(auto val: v){
        //     cout << val << " ";
        // }
        // cout << endl;

        if(v.size() == 0) no;

        else{
            int ans = v[0];

            for(i=1; i<v.size(); i++){
                ans = ans&v[i];
            }

            if(ans == b) yes;
            else no;
        }
    }

    return 0;
}