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

bool isPrime(int n){
    
    if(n <= 1) return false;            // Corner Case //

    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int main()
{
    fastIO;               

    int n, i, j;
    cin >> n;

    int ans = 0;

    for(i=1; i<=n; i++){
        int cnt = 0;

        for(j=2; j<=(i/2); j++){
            if(i%j == 0){
                if(isPrime(j)) cnt++;
            }
        }

        if(cnt == 2) ans++;

    }

    cout << ans << endl;

    return 0;
}

// -------------------------------------------------------------------- //

/*
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

long long sv[10000010];
 
void sieve(){
    long long i, j;
    memset(sv,0,sizeof(sv));
 
    for(i=2; i<10000010; i++){
        if(sv[i] == 0){
            for(j=i+i; j<10000010; j+=i){
            sv[j] = 1;
            }
        }
    }
}

int main()
{
    fastIO;   

    sieve();

    int n, i, j, ans = 0;
    cin >> n;

    for(i=2; i<=n; i++){
        int cnt = 0;

        for(j=2; j<=(i/2); j++){
            if(i%j == 0){
                if(sv[j] == 0){
                    cnt++;
                }
            }
        }

        if(cnt == 2){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
*/