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

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        string s;
        cin >> s;

        map<int, set<char>> mp;

        for(i=0; i<n; i++){
            mp[a[i]].insert(s[i]);
        }

        // for(auto it = mp.begin(); it != mp.end(); it++){
        //     cout << it->first << " " << it->second.size() << endl;
        // }

        bool flag = true;

        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second.size() > 1) {
                flag = false;
                break;
            }
        }
        if(flag) yes;
        else no;
    }

    return 0;
}