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
        int n = s.size(), i;

        int temp1 = s[0];
        int temp2 = s[n-1];

        vector<pair<char, int>> v;

        for(i=1; i<n-1; i++){
            int val = s[i];

            if((val >= temp1 && val <= temp2) || (val >= temp2 && val <= temp1)){
                v.pb({s[i], i+1});
            }
        } 

        sort(v.begin(), v.end());

        ll sum1 = 0;

        for(i=0; i<v.size()-1; i++){
            int val1 = v[i].first;
            int val2 = v[i+1].first;

            sum1 += abs(val1 - val2);
        }

        sum1 += abs(s[0] - v[0].first);
        sum1 += abs(s[n-1]-v[v.size()-1].first);

        reverse(v.begin(), v.end());

        ll sum2 = 0;

        for(i=0; i<v.size()-1; i++){
            int val3 = v[i].first;
            int val4 = v[i+1].first;

            sum2 += abs(val3 - val4);
        }

        sum2 += abs(s[0]-v[0].first);
        sum2 += abs(s[n-1]-v[v.size()-1].first);

        ll cost = min(sum1, sum2);
        ll jump = v.size()+2;

        cout << cost << " " << jump << endl;

        cout << 1 << " ";
        for(auto val: v){
            cout << val.second << " ";
        }
        cout << n << " " << endl;

        // for(i=0; i<v.size(); i++){
        //     cout << v[i].first << " " << v[i].second << endl;
        // }

    }


    return 0;
}