#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "NO\n")
#define      no              (cout << "YES\n")
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

        for(i=0; i<n; i++){
            int x;
            string s;
            cin >> x;
            cin.ignore();
            cin >> s;

            int u = 0, d = 0;

            for(j=0; j<s.size(); j++){
                if(s[j] == 'D') d++;
                if(s[j] == 'U') u++;    
            }

            a[i] += d;
            a[i] -= u;

            if(a[i] < 0) cout << a[i]+10 << " ";
            else if(a[i] > 9) cout << a[i]-10 << " ";
            else cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}