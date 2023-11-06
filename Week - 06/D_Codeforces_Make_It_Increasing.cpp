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

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        int cnt = 0;

        for(i=n-1; i>=1; i--){
            if(a[i] <= a[i-1]){

                while(a[i-1] >= a[i]){
                    cnt++;
                    a[i-1] /= 2;

                    if(a[i-1] == 0){
                        break;
                    }

                }
            }
        }

        bool flag = true;

        for(i=0; i<n-1; i++){
            if(a[i] >= a[i+1]){
                flag = false;
                break;
            }
        }
        if(!flag) cout << -1 << endl;
        else cout << cnt << endl;
    }

    return 0;
}