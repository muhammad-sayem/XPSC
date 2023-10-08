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
        int n, i, j;
        cin >> n;
        cin.ignore();

        vector<string> v[3];

        for(i=0; i<3; i++){
            for(j=0; j<n; j++){
                string s;
                cin >> s;
                v[i].pb(s);
            }
        }

        map<string, int> mp;

        for(i=0; i<3; i++){
            for(auto word: v[i]){
                mp[word]++;
            }
        }

        for(i=0; i<3; i++){
            ll sum = 0;

            for(auto word: v[i]){
                if(mp[word] == 1){
                    sum += 3;
                }
                else if(mp[word] == 2){
                    sum += 1;
                }
            }
            cout << sum << " ";
        }
        cout << endl;

    }

    return 0;
}