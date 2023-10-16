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
        int n, s, i, maxx = -1;
        cin >> n >> s;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
            maxx =  max(maxx, a[i]);
        }

        ll sum = (maxx*(maxx+1))/2;

        for(i=0; i<n; i++){
            sum -= a[i];
        }

        bool f = false;

        for(i=maxx+1; ; i++){
            if(sum == s){
                f = true;
                break;
            }

            sum += i;
            if(sum > s) {
                break;
            }
        }
        if(f) yes;
        else no;

    }

    return 0;
}