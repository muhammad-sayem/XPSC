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
        string s;
        cin >> s;

        ll p, i;
        cin >> p;

        vector<pair<char, ll>> v;

        for(i=0; i<s.size(); i++){
            v.pb({s[i], i});
        }

        sort(v.begin(), v.end());

        ll sum = 0;
        vector<pair<ll, char>> ans; 

        for(i=0; i<v.size(); i++){
            ll val = v[i].first - 96;
            
            sum += val; 
            
            if(sum == p){
                ans.pb({v[i].second, v[i].first});
                break;
            }
            else if(sum < p){
                ans.pb({v[i].second, v[i].first});
            }
            else if(sum > p){
                sum -= val;
            }
        }

        sort(ans.begin(), ans.end());

        for(auto pair: ans){
            cout << pair.second;
        }
        cout << endl;
    }

    return 0;
}