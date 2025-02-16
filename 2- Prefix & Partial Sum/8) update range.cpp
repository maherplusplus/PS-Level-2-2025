// Problem Link:
// https://codeforces.com/group/wNS3GwuHOE/contest/435607/problem/E

void maherplusplus() {
    int n,q;
    cin >> n >> q;
 
    vector<int> v(n),pre(n + 2);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    while (q--) {
        int x,y,value;
        cin >> x >> y >> value;
 
        pre[x] += value;
        pre[y + 1] -= value;
    }
 
    for (int i = 1; i <= n; i++) {
        pre[i] += pre[i - 1];
    }
 
    for (int i = 1; i <= n; i++) {
        cout << pre[i] + v[i - 1] << ' ';
    }
}

