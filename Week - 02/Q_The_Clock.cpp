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

bool isPalindrome(string s1){
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    if(s1 == s2) return true;
    else return false;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;

        int n;
        cin >> n;

        string str1, str2;

        str1 += s[0];
        str1 += s[1];

        str2 += s[3];
        str2 += s[4];

        int val1 = stoi(str1);
        int val2 = stoi(str2);

        cout << val1 << " " << val2 << endl;
    }

    


    return 0;
}