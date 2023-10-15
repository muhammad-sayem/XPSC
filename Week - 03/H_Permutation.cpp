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
        int n, i, j, value;
        cin >> n;
        int m = n-1;
        int a[n+5][m+5];

        vector<int> v;
        vector<int> vec;

        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cin >> a[i][j];
                
                if(i == 1) v.pb(a[i][j]);
                if(i == 1) vec.pb(a[i][j]);
            }
        }

        sort(v.begin(), v.end());

        if(v[0] != 1){
            cout << 1 << " ";
            for(auto val: vec){
                cout << val << " ";
            }
            cout << endl;
        }

        else{
            for(i=0; i<v.size()-1; i++){
                if(v[i+1] - v[i] > 1){
                    value = v[i]+1;
                    break;
                }
                else{
                    value = n;
                }
            }

            for(auto val: vec){
                cout << val << " ";
            }
            cout << value << endl;
        }
    }

    return 0;
}