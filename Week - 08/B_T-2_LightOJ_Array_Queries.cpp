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

const int mx = 1e5+5;
int tree[mx*3];

void build(int a[], int node, int l, int r){
    if(l == r){
        tree[node] = a[l];
        return;
    }

    int leftNode = node*2;
    int rightNode = (node*2)+1;
    int mid = (l+r)/2;

    build(a, leftNode, l, mid);
    build(a, rightNode, mid+1, r);

    tree[node] = min(tree[leftNode], tree[rightNode]);
}

int query(int node, int l, int r, int x, int y){
    if(r<x || l>y){
        return INT_MAX;
    }
    if(l>=x && r<=y){
        return tree[node];
    }

    int leftNode = node*2;
    int rightNode = (node*2)+1;
    int mid = (l+r)/2;

    int val1 = query(leftNode, l, mid, x, y);
    int val2 = query(rightNode, mid+1, r, x, y);

    return min(val1, val2);
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    for(int k=1; k<=test; k++){
        cout << "Case " << k << ": "<< nl;

        int n, q, i;
        cin >> n >> q;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        build(a, 1, 0, n-1);

        // for(i=1; i<=9; i++){
        //     cout << tree[i] << " ";
        // }

        while(q--){
            int x, y;
            cin >> x >> y;
            x--;
            y--;

            cout << query(1, 0, n-1, x, y) << nl;
        }
    }

    return 0;
}