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
        int n, i;
        cin >> n;
        int a[n+5];
        int fre[105] = {0};

        for(i=0; i<n; i++){
            cin >> a[i];
            fre[a[i]]++;
        }

        vector<int> v;

        for(i=0; i<105; i++){
            if(fre[i] >= 2) v.pb(i);
        }

        if(v.size() < 2) cout << -1 << nl;
        else{
            bool f1 = false;
            bool f2 = false;

            vector<int> ans;

            for(i=0; i<n; i++){
                if(a[i] == v[0]){
                    if(!f1){
                        ans.pb(1);
                        f1 = true;
                    } 
                    else{
                        ans.pb(2);
                    }
                }

                else if(a[i] == v[1]){
                    if(!f2){
                        ans.pb(1);
                        f2 = true;
                    } 
                    else{
                        ans.pb(3);
                    }
                }

                else{
                    ans.pb(1);          // ekhane 2 ba 3 dileo valid //
                }
            }

            for(auto val: ans){
                cout << val << " ";
            }
            cout << nl;
        } 
    }

    return 0;
}