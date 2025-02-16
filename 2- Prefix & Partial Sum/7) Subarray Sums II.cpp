// Problem Link:
// https://cses.fi/problemset/task/1661

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
 
    int n,target;
    cin >> n >> target;
 
    vector<int> pre(n+1);
    for (int i=1;i<=n;i++) {
        cin >> pre[i];
        pre[i] += pre[i-1];
    }
 
    map<int,int> mp;
    int ans{};
    for (int i=0;i<=n;i++) {
        int search = pre[i] - target;
        ans += mp[search];
        mp[pre[i]]++;
    }
    cout << ans;
}
