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

    string s;
    cin >> s;
    int a[26] = {0}, i;
    char ch;
    bool flag = false;

    for(i=0; i<s.size(); i++){
        int val = s[i] - 'a';
        a[val]++;
    }

    for(i=0; i<26; i++){
        if(a[i] == 0){
            ch = i + 'a';
            flag = true;
            break;
        }
    }

    if(flag) cout << ch << endl;
    else cout << "None" << endl;
    
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int n;
//     // cin >> n;
//     // char ch = n + 'a';

//     // cout << ch << endl;

//     char ch;
//     cin >> ch;

//     int val = ch;
//     cout << val << endl;
    
//     return 0;
// }