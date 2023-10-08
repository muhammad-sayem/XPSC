#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
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
        set<int> s;

        for(i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }

        int size = s.size();

        if(size == n) cout << n << endl;
        else{
            if(n%2 != 0){
                if(size%2 == 0) cout << size-1 << endl;
                else cout << size << endl;
            }
            else{
                if(size%2 != 0) cout << size-1 << endl;
                else cout << size << endl;
            }
        }
    }

    return 0;
}