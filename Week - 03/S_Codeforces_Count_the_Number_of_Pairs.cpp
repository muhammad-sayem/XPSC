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
        int n, k, i;
        cin >> n >> k;
        
        string s;
        cin >> s;

        int a[26] = {0};
        int A[26] = {0};

        for(i=0; i<s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                a[s[i]-'a']++;
            }

            if(s[i] >= 'A' && s[i] <= 'Z'){
                A[s[i]-'A']++;
            }
        }

        ll sum = 0;

        for(i=0; i<26; i++){
            if(a[i] != 0 && A[i] != 0){
                int minn = min(a[i], A[i]);
                sum += minn;
                a[i] -= minn;
                A[i] -= minn;
            }
        }

        int cnt = 0;

        for(i=0; i<26; i++){
            if(a[i] >= 0){
                cnt += a[i]/2;
            }
            
            if(A[i] != 0){
                cnt += A[i]/2;
            }
        }

        // cout << k << " " << cnt << endl;

        sum += min(k, cnt);

        cout << sum << endl;
    }

    return 0;
}