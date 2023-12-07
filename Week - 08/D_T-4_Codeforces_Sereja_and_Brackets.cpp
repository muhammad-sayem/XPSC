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

const int mx = 1e6+5;
class Node{
    public:
        int ans, open, close;

        Node(int a, int o, int c){
            ans = a;
            open = o;
            close = c;
        }

        Node() {}
};

Node tree[mx*3];

Node merge(Node a, Node b){
    int ans = min(a.open, b.close);
    a.open -= ans;
    b.close -= ans;

    Node n(a.ans+b.ans+ans, a.open+b.open, a.close+b.close);
    return n;
}

void build(string &s, int node, int l, int r){
    if(l == r){
        if(s[l] == '('){
            tree[node].open = 1;
            tree[node].close = 0;
            tree[node].ans = 0;
        }
        else{
            tree[node].close = 1;
            tree[node].open = 0;
            tree[node].ans = 0;
        }
        return;
    }

    int leftNode = node*2;
    int rightNode = (node*2)+1;
    int mid = (l+r)/2;

    build(s, leftNode, l, mid);
    build(s, rightNode, mid+1, r);
    tree[node] = merge(tree[leftNode], tree[rightNode]);
}

Node query(int node, int l, int r, int x, int y){
    if(l>=x && r<=y){
        return tree[node];
    }
    if(r<x || l>y){
        return Node(0, 0, 0);
    }
    int leftNode = node*2;
    int rightNode = (node*2)+1;
    int mid = (l+r)/2;

    return merge(query(leftNode, l, mid, x, y), query(rightNode, mid+1, r, x, y));
}

int main()
{
    fastIO;

    string s;
    cin >> s;

    int q;
    cin >> q;

    build(s, 1, 0, s.size()-1);

    while(q--){
        int x, y;
        cin >> x >> y;
        x--;
        y--;

        Node ansNode = query(1, 0, s.size()-1, x, y);
        cout << 2*(ansNode.ans) << nl;
    }

    return 0;
}