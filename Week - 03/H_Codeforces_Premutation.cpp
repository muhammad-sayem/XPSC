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
        int n, i, j, index, value, val;
        cin >> n;
        int m = n-1;
        int a[n+5][m+5];

        vector<int> v;
        vector<int> vec;
        vector<int> vec2;

        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cin >> a[i][j];
                
                if(j == 1) v.pb(a[i][j]);
            }
        }

        int fre[105] = {0};

        for(i=0; i<v.size(); i++){
            fre[v[i]]++;
        }

        for(i=1; i<=n; i++){
            if(fre[i] == 1){
                value = i;
            }
        }

        for(i=0; i<v.size(); i++){
            if(v[i] == value){
                index = i+1;
            }
        }

        for(i=index; i<=index; i++){
            for(j=1; j<=m; j++){
                vec.pb(a[i][j]);
                vec2.pb(a[i][j]);
            }
        }

        sort(vec.begin(), vec.end());

        if(vec[0] != 1){
            val = 1;
        }

        else{
            for(i=0; i<vec.size()-1; i++){
                if(vec[i+1] - vec[i] > 1){
                    val = vec[i]+1;
                    break;
                }
                else{
                    val = n;
                }
            }
        }

        cout << val << " ";
        for(auto vall: vec2){
            cout << vall << " ";
        }
        cout << endl;
    }

    return 0;
}