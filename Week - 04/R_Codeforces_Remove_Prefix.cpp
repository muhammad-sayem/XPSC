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
        int n, i, cnt = 0;
        cin >> n;
        int a[n+5];

        bool fre[n+5] = {false};

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        for(i=n; i>=1; i--){
            if(!fre[a[i]]){
                cnt++;
                fre[a[i]] = true;
            }
            else{
                break;
            }
        }
        cout << n-cnt << endl;
    }

    return 0;
}