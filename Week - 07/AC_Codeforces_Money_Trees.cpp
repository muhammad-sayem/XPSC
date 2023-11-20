// #include<bits/stdc++.h>
// #define      nl              '\n'
// #define      yes             (cout << "YES\n")
// #define      no              (cout << "NO\n")
// #define      yy              (cout << "Yes\n")
// #define      nn              (cout << "No\n")
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
//         ll n, k, i, j;
//         cin >> n >> k;
        
//         ll a[n+5];
//         ll h[n+5];

//         for(i=0; i<n; i++){
//             cin >> a[i];
//         }

//         for(i=0; i<n; i++){
//             cin >> h[i];
//         }

//         i = 0, j = 1;
//         ll sum = a[0], ans = 0;

//         if(sum <= k) ans = 1;

//         while(j<n){
//             if((h[j-1] % h[j]) == 0){
//                 sum += a[j];
//             }
//             else{
//                 sum = a[j];
//                 i = j;
//             }

//             while(sum > k){
//                 sum -= a[i];
//                 i++;
//             }

//             ans = max(ans, j-i+1);
//             j++;
//         }

//         cout << ans << nl;
//     }


//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, i;
//     cin >> n;
//     vector<int> a(n);
//     vector<int> v;

//     for(i=0; i<n; i++){
//         cin >> a[i];
//     }

//     v = a;

//     for(auto val: v){
//         cout << val << " ";
//     }
//     cout << endl;
//     for(auto val: a){
//         cout << val << " ";
//     }

//     return 0;
// }