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
        int dogFood, catFood, bothFood, dogs, cats;
        cin >> dogFood >> catFood >> bothFood >> dogs >> cats;

        dogs -= dogFood;
        cats -= catFood;

        if(dogs > 0 && cats > 0){
            if((dogs + cats) <= bothFood) yes;
            else no;
        }

        else if(dogs <= 0 && cats > 0){
            if(cats <= bothFood) yes;
            else no;
        }

        else if(cats <= 0 && dogs > 0){
            if(dogs <= bothFood) yes;
            else no;
        }

        else yes;
    }

    return 0;
}