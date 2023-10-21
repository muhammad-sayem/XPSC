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
        string s1;
        cin >> s1;

        string s2;
        cin >> s2;

        if(s1 == s2) cout << '=' << endl;
       
        else{
            if(s1 == "M" && s2[s2.size()-1] == 'L'){
                cout << '<' << endl;
            }

            else if(s1 == "M" && s2[s2.size()-1] == 'S'){
                cout << '>' << endl;
            }

            else if(s2 == "M" && s1[s1.size()-1] == 'L') {
                cout << '>' << endl;
            }

            else if(s2 == "M" && s1[s1.size()-1] == 'S'){
                cout << '<' << endl;
            }

            else if(s1[s1.size()-1] == 'L' && s2[s2.size()-1] == 'L'){
                if(s1.size() > s2.size()){
                    cout << '>' << endl;
                }
                else{
                    cout << '<' << endl;
                }
            }

            else if(s1[s1.size()-1] == 'S' && s2[s2.size()-1] == 'S'){
                if(s1.size() > s2.size()) {
                    cout << '<' << endl;
                }
                else {
                    cout << '>' << endl;
                }
            }

            else if(s1[s1.size()-1] == 'S' && s2[s2.size()-1] == 'L') {
                cout << '<' << endl;
            }
            else if(s1[s1.size()-1] == 'L' && s2[s2.size()-1] == 'S') {
                cout << '>' << endl;
            }
        }   
    }

    return 0;
}