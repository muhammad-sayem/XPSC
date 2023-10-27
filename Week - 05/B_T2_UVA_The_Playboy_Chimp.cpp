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

    int n, i;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    int q;
    cin >> q;

    while(q--){
        int x;
        cin >> x;

        auto it1 = lower_bound(a, a+n, x);
        int index1 = it1 - a;
        int ans1 = a[index1-1];

        auto it2 = upper_bound(a, a+n, x);
        int index2 = it2 - a;
        int ans2 = a[index2];

        if(index1 != 0)cout << ans1 << " ";
        else cout << "X" << " ";
        
        if(index2 < n) cout << ans2 << endl;
        else cout << "X" << endl;
    }

    return 0;
}