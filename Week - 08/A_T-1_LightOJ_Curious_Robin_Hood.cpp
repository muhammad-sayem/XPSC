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

    tree[node] = tree[leftNode] + tree[rightNode];
}

int query(int node, int l, int r, int x, int y){
    if(l>=x && r<=y){
        return tree[node];
    }
    if(r<x || l>y){
        return 0;
    }

    int leftNode = node*2;
    int rightNode = (node*2)+1;
    int mid = (l+r)/2;

    return query(leftNode, l, mid, x, y) + query(rightNode, mid+1, r, x, y);
}

void update1(int node, int l, int r, int index){
    if(index<l || index >r){
        return;
    }

    if(l == r && l == index){
        tree[node] = 0;
        return;
    }

    int leftNode = node*2;
    int rightNode = (node*2)+1;
    int mid = (l+r)/2;

    update1(leftNode, l, mid, index);
    update1(rightNode, mid+1, r, index);

    tree[node] = tree[leftNode] + tree[rightNode];
}

void update2(int node, int l, int r, int index, int val){
    if(index<l || index >r){
        return;
    }

    if(l == r && l == index){
        tree[node] += val;
        return;
    }

    int leftNode = node*2;
    int rightNode = (node*2)+1;
    int mid = (l+r)/2;

    update2(leftNode, l, mid, index, val);
    update2(rightNode, mid+1, r, index, val);

    tree[node] = tree[leftNode] + tree[rightNode];
}

int main()
{
    fastIO;

    int test, k;
    cin >> test;

    for(k=1; k<=test; k++){
        cout << "Case " << k << ": " << nl;
        int n, q, i;
        cin >> n >> q;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        build(a, 1, 0, n-1);

        while(q--){
            int value;
            cin >> value;

            if(value == 1){
                int index;
                cin >> index;
                //index--;

                cout << query(1, 0, n-1, index, index) << nl;
                update1(1, 0, n-1, index);
            }
            else if(value == 2){
                int index, amount;
                cin >> index >> amount;
                //index--;

                update2(1, 0, n-1, index, amount);
            }
            else{
                int x, y;
                cin >> x >> y;
                //x--;
                //y--;

                int ans = query(1, 0, n-1, x, y);

                cout << ans << nl;
            }
        }
    }


    return 0;
}