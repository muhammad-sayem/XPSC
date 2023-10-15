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
        int n, m, i, j, row, col;
        cin >> n >> m;
        int a[n+5][m+5];

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        ll maxx = -1;

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                ll sum = 0;
                sum += a[i][j];

                // bottom left corner //
                row = i, col = j;
                row++, col++;
                while(row < n && col < m){
                    sum += a[row][col];
                    row++;
                    col++;
                }

                // bottom right corner //
                row = i, col = j;
                row++, col--;
                while(row < n && col >= 0){
                    sum += a[row][col];
                    row++;
                    col--;
                }

                // top left corner //
                row = i, col = j;
                row--, col--;
                while(row >= 0 && col >= 0){
                    sum += a[row][col];
                    row--;
                    col--;
                }

                // top right corner //
                row = i, col = j;
                row--, col++;
                while(row >= 0 && col < m){
                    sum += a[row][col];
                    row--;
                    col++;
                }
                // cout << sum << " ";
                maxx = max(maxx, sum);
            }
        }

        cout << maxx << endl;
    }

    return 0;
}