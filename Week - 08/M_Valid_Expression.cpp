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
        int n, x, i;
        cin >> n >> x;

        int highest = n+1;
        int lowest = (n*(-1))+1;

        if(x >= lowest && x <= highest){
            if(x == 0){
                for(i=1; i<n; i++){
                    cout << "*";
                }
                cout << "-" << nl;
            }

            else if(x > 0){
                if(x == 1){
                    for(i=1; i<=n; i++){
                        cout << "*";
                    }
                    cout << nl;
                }
                else if(x == highest){
                    for(i=1; i<=n; i++){
                        cout << "+";
                    }
                    cout << nl;
                }
                else{
                    int cnt = 0;
                    for(i=1; i<x; i++){
                        cnt++;
                        cout << "+";
                    }

                    int tm = n-cnt;

                    for(i=1; i<=tm; i++){
                        cout << "*";
                    }
                    cout << nl;
                }
            }

            else{
                int val = abs(x)+1;
                int temp = n-val;
                for(i=1; i<=temp; i++){
                    cout << "*";
                }

                for(i=1; i<=val; i++){
                    cout << "-";
                }
                cout << nl;
            }
        }

        else{
            cout << -1 << nl;
        }
    }

    return 0;
}