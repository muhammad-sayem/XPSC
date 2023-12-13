#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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

        string s;
        cin >> s;

        ll track = 0;

        for(i=0; i<n; i++){
            if(s[i] == '('){
                track++;
            }
            else{
                track--;
            }
        }
        // cout << track << nl;

        if(track != 0) cout << -1 << nl;
        else{
            stack<pair<char, ll>> st;

            for(i=0; i<n; i++){
                if(s[i] == ')'){
                    if(st.top().first == '('){
                            st.pop();
                    }
                    else{
                        st.push({s[i], i});
                    }
                }
                else{
                    st.push({s[i], i});
                }
            }

            while(!st.empty()){
                cout << st.top().first << " " << st.top().second << nl; 
                st.pop();
            }

            // ll fre[200005] = {1};

            // while(!st.empty()){
            //     fre[st.top().second] = 2;
            //     st.pop();
            // }

            // for(i=0; i<n; i++){
            //     cout << fre[i] << " ";
            // }
            // cout << nl;
            }
        }

    return 0;
}