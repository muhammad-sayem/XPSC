// #include<bits/stdc++.h>
// #define      endl            '\n'
// #define      yes             (cout << "YES\n")
// #define      no              (cout << "NO\n")
// #define      ll              long long
// #define      pb              push_back
// #define      pii             pair <int,int>
// #define      pll             pair <long long,long long>
// #define      rev(a)          reverse(a, a+n);
// #define      Srev(s)         reverse(s.begin(), s.end());
// #define      sz(s)           s.size()
// #define      gcd(a,b)        __gcd(a,b)
// #define      lcm(a,b)        (a*b)/gcd(a,b)
// #define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     fastIO;

//     int test;
//     cin >> test;

//     while(test--){
//         ll n, i, val, ans;
//         cin >> n;
//         vector<ll> v;

//         for(i=0; i<=9; i++){
//             double val = pow(10, i);
//             v.pb(val);
//         }

//         bool flag = true;

//         for(i=0; i<v.size(); i++){
//             if(n < v[i]){
//                 val = v[i-1];
//                 flag = false;
//                 break;
//             }
//         }
        
//         if(flag) cout << 0 << endl;
//         else cout << n-val << endl;

//         // for(auto value: v){
//         //     if(n <= value){
//         //         cout << n-value << endl;
//         //         break;
//         //     }
//         // }

//         // for(auto val: v){
//         //     cout << val << " " << endl;
//         // }
//     }

//     return 0;
// }

// ---------------------------------------------------- //

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
        int m;
        cin >> m;

        ll n = 1;

        while(n <= m){
            n *= 10;
        }
        cout << m-(n/10) << endl;
    }

    return 0;
}