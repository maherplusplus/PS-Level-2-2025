// Problem Link:
// https://cses.fi/problemset/task/1660

void maherplusplus() {
    int n,x;
    cin >> n >> x;
 
    vector<int> v(n + 1);
    map<int,bool> mp;
 
    mp[0] = true;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
 
        v[i] += v[i - 1];
        mp[v[i]] = true;
    }
 
    int ans{};
    for (int i = 0; i <= n; i++) {
        int search = v[i] - x;
        if (mp[search]) ans++;
    }
    cout << ans; 
}
