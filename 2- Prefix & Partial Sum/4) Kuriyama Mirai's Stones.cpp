// Problem Link:
// https://codeforces.com/contest/433/problem/B

void maherplusplus() {
    int n;
    cin >> n;
 
    vector<int> arr(n + 1),pre(n+1,0);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
 
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + arr[i];
    }
 
    sort(arr.begin(), arr.end());
    vector<int>pre2(n+1,0);
    for (int i = 1; i <= n; i++) {
        pre2[i] = pre2[i - 1] + arr[i];
    }
 
    int q;
    cin >> q;
    while(q--) {
        int op;
        int x,y;
        cin >> op >> x >> y;
 
        if (op == 1) cout << pre[y] - pre[x - 1] << endl;
        else cout << pre2[y] - pre2[x - 1] << endl;
    }
}

