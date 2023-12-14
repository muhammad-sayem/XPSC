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
        ll n, i;
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
            bool flag = true;
            stack<ll> st;
            vector<ll> ans(n, 2);
            
            for(i=0; i<n; i++){
                if(s[i] == '('){
                    st.push(i);
                }
                else{
                    if(st.empty()){
                        flag = false;
                        continue;
                    }

                    ans[i] = 1;
                    ans[st.top()] = 1;
                    st.pop();
                }
            }

            
            if(!flag){
                while(!st.empty()){
                    st.pop();
                }

                ans.assign(n, 2);

                for(i=0; i<n; i++){
                    if(s[i] == ')'){
                        st.push(i);
                    }
                    else{
                        if(st.empty()){
                            flag = false;
                            continue;
                        }

                        ans[i] = 1;
                        ans[st.top()] = 1;
                        st.pop();
                    }
                }
            }

            ll color = *max_element(ans.begin(), ans.end());
            cout << color << nl;
            for(i=0; i<n; i++){
                cout << ans[i] << " ";
            }
            cout << nl;
        }
    }

    return 0;
}

