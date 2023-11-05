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
        int n, i;
        cin >> n;
        int a[n+5];
        int b[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n; i++){
            cin >> b[i];
        }

        bool flag = true;

        for(i=0; i<n; i++){
            if(b[i] > a[i]){
                flag = false;
                break;
            }
        }

        if(!flag) no;

        else{

            if(n == 1){
                if(a[0] >= b[0]) yes;
                else no;
            }

            else{
                int diff = -1;
                bool f = true;

                for(i=0; i<n; i++){
                    if(b[i] != 0){
                        diff = a[i]-b[i];
                        break;
                    }
                }

                if(diff != -1){
                    for(i=0; i<n; i++){
                        if(b[i] != 0 && (a[i]-b[i]) != diff){
                            f = false;
                            break;
                        }
                        if(b[i] == 0 && (a[i]-b[i]) > diff){
                            f = false;
                            break;
                        }
                    }

                    if(f) yes;
                    else no;
                }

                else yes;           // jokhon b array er shob elements 0 hobe tokhon upore (a array te) jai thakuk na keno "YES" hobe //
            }
        }
    }

    return 0;
}