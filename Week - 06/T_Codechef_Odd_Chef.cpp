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
        ll n, k;
        cin >> n >> k;

        if(n%2 == 0){

            ll val = n/2;

            if(val%2 == 0){
                if(k <= val && k%2 == 0) yes;
                else no;
            }
            else{
                if(k <= val && k%2 != 0) yes;
                else no;
            }
        }
        
        else{
            
            ll numOfOdds = (n/2)+1;

            if(numOfOdds%2 == 0){
                if((k <= ((n-2)/2)) && k%2 == 0) yes;
                else no;
            }

            else{
                if((k <= ((n-2)/2)) && k%2 != 0) yes;
                else no;
            }
        }
    }

    return 0;
}