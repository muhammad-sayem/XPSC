// Problem 1: Odd Divisor (Codeforces - 1475 A) //

/*
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
        ll n; 
        cin >> n;

        if((n & (n-1)) != 0) yes;
        else no;
    }

    return 0;
}
*/

// ---------------------------------------------------------------- //

// Problem 2: Bitwise Exclusive Or (AtCoder - abc213_a) //

/*
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

    int a, b;
    cin >> a >> b;

    int ans = a^b;

    cout << ans << endl;

    return 0;
}
*/

// ------------------------------------------------------------------ //

// Problem 3: XORwice (Codeforces - 1421 A) // 

/*
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
        int a, b;
        cin >> a >> b;

        int ans = a^b;

        cout << ans << endl;
    }

    return 0;
}
*/

// -------------------------------------------------------------------- //

// Problem 4: And Then There Were K (Codeforces - 1527 A) //

/*
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
        ll n, i, val, ans;
        cin >> n;

        for(i=1; i<=32; i++){
            if(pow(2, i) > n){
                val = i-1;
                break;
            }
            else if(pow(2, i) == n){
                val = i;
                break;
            }
        }

        ans = pow(2, val)-1;
        
        cout << ans << endl;
    }

    return 0;
}
*/

/*
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
        ll n, cnt = 0;
        cin >> n;

        while(n!=1){
            n /= 2;         // n >>= 1;
            cnt++;
        }

        ll ans = (1<<cnt) - 1;
        cout << ans << endl;
    }

    return 0;
}
*/

// ----------------------------------------------------------------------- //

// Problem 5: AND 0, Sum Big (Codeforces - 1514 B)

/*
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

ll mod=1e9+7;

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, k, i;
        cin >> n >> k;
        ll ans = 1;

        for(i=0; i<k; i++){
            ans = (ans*n)%mod;
        }
        cout << ans << endl;
    }

    return 0;
}
*/

// ---------------------------------------------------------- //

// Problem 6: We Need the Zero (Codeforces - 1805 A) //

// Multiple Answers Possible // 

/*
    Approach by Rahat_Khan_Pathan vai: 
    
    Jodi (n%2 != 0) hoy tahole full array er XOR e ans
    Jodi (n%2 == 0) hoy tahole jodi full at=rray er XOR zero hoy tahole ans 0 naile -1
*/

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

        int ans = 0;

        for(i=0; i<n; i++){
                ans = ans^a[i];
        }

        if(n%2 != 0){
            cout << ans << endl;
        }

        else{
            if(ans == 0) cout << 0 << endl;     // Any integer is valid //
            else cout << -1 << endl;
        }
    }

    return 0;
}