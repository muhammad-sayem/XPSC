#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long, long long>
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

    int a, b, c, i, j;
    cin >> a >> b >> c;
    vector<int> v1;
    vector<int> v2;

    for(i=1; i<=10003; i++){
        if(a*i > c){
            break;
        }
        v1.pb(a*i);
    }

    for(i=1; i<=1000; i++){
        if(b*i > c){
            break;
        }
        v2.pb(b*i);
    }

    bool flag = false;

    for(i=0; i<v1.size(); i++){
        if(v1[i] == c){
            flag = true;
            break;
        }
    }

    for(i=0; i<v2.size(); i++){
        if(v2[i] == c){
            flag = true;
            break;
        }
    }

    for(i=0; i<v1.size(); i++){
        for(j=0; j<v2.size(); j++){
            if(v1[i] + v2[j] == c){
                flag = true;
                break;
            }
        }
    }

    if(flag) cout << yes << endl;
    else cout << no << endl;

    return 0;
}