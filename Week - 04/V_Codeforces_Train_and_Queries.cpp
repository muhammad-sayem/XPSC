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
        int n, q, i;
        cin >> n >> q;
        int a[n+5]; 
        map<int, multiset<int>> mp;

        for(i=1; i<=n; i++){
            cin >> a[i];
            mp[a[i]].insert(i);
        }

        // for(auto it = mp.begin(); it != mp.end(); it++){
        //     cout << it->first << " " << *it->second.rbegin() << endl;
        // }

        while(q--){
            int source, dest;
            cin >> source >> dest;

            if(mp[source].size() == 0 || mp[dest].size() == 0) no;
            else if(*mp[source].begin() < *mp[dest].rbegin()) yes;
            else no;
        }
    }

    return 0;
}