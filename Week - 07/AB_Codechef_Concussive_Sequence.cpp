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

bool ok(int a[], int n){
    for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1] && a[i] > a[i+1]){
            continue;
        }

        else if(a[i] < a[i+1] && a[i] < a[i+1]){
            continue;
        }
        
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        int n, i, j;
        cin >> n;
        int a[n+5];
        int b[n+5];
        int c[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        int index = 0;
        for(i=0; i<n; i++){
            if(index >= n){
                index = 1;
            }
            b[index] = a[i];
            index += 2;
        }

        index = 1;
        for(i=0; i<n; i++){
            if(index >= n){
                index = 0;
            }
            c[index] = a[i];
            index += 2;
        }

        if(ok(b, n)){
            for(i=0; i<n; i++){
                cout << b[i] << " ";
            }
            cout << nl;
        }

        else if(ok(c, n)){
            for(i=0; i<n; i++){
                cout << c[i] << " ";
            }
            cout << nl;
        }

        else{
            cout << -1 << " " << nl;
        }
    }

    return 0;
}