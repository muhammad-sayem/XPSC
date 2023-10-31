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
        int n, h, m;
        cin >> n >> h >> m;
        int sleepTime = (h*60) + m;
        int minn = INT_MAX;

        while(n--){
            int hour, mins, hr, mn, total = 1e9;
            cin >> hour >> mins;

            int wakeUpTime = (hour*60) + mins;

            if(wakeUpTime < sleepTime){
                wakeUpTime += 24*60;
            }
            minn = min(minn, (wakeUpTime - sleepTime));
        }
        cout << (minn/60) << " " << (minn%60) << endl;
    }

    return 0;
}