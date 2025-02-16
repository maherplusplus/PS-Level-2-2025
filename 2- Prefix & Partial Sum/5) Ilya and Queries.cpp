// Problem Link:
// https://codeforces.com/problemset/problem/313/B

void maherplusplus() {
    string s;
    int n;
    cin >> s >> n;
 
    vector<int>pre(s.size(), 0);
    for (int i = 0;i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) pre[i]++;
 
        pre[i] += pre[i - 1];
    }
 
    while (n--) {
        int x,y;
        cin >> x >> y; x--,y--;
 
        cout << pre[y - 1] - pre[x - 1] << endl;
    }
}
