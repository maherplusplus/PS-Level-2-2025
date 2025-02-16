// Problem Link:
// https://codeforces.com/group/wNS3GwuHOE/contest/435607/problem/D

void maherplusplus() {
    int n, q;
    cin >> n >> q;
 
    vector<int> arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
 
    vector<int> pre(n + 1,0);
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + arr[i];
    }
 
    while (q--) {
        int x,y;
        cin >> x >> y;
 
        cout << pre[y] - pre[x - 1] << endl;
    }
}
