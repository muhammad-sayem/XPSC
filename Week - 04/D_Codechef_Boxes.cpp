#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      ll              long long
#define      pb              push_back
#define      pii             pair <ll,ll>
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

    ll test;
    cin >> test;

    while(test--){
        ll n, i;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n, greater<ll>());
        priority_queue<ll> pq;
        pq.push(a[0]);

        for(i=1; i<n; i++){
            if(a[i] <= pq.top()){
                ll temp = pq.top();
                pq.pop();
                pq.push(a[i] ^ temp);
            }
            else{
                pq.push(a[i]);
            }
        }

        cout << pq.size() << endl;
    }

    return 0;
}