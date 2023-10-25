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

vector<int> v;
 
void preCalculate(){
    for(int i=0; i<(1<<15); i++){
        string str = to_string(i);

        if(isPalindrome(str)){
            v.pb(i);
        }
    }
}

int main()
{
    fastIO;

    preCalculate();

    int test;
    cin >> test;

    while(test--){
        int n, i, j;
        cin >> n;
        int a[n];
        
        unordered_map<int, int> mp;   

        for(i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        ll cnt = n;

        for(i=0; i<n; i++){
            for(j=0; j<v.size(); j++){
                int temp = a[i]^v[j];
                if(mp[temp]){
                    cnt += mp[temp];
                }
            }
        }

        cout << cnt/2 << endl;

        // for(auto val: v){
        //     cout << val << " ";
        // }
    }

    return 0;
}