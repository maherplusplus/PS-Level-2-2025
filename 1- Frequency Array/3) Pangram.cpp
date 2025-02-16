// Problem Link:
// https://codeforces.com/problemset/problem/520/A

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
 
    int n;
    string s;
    cin>>n>>s;
 
    int freq[26] {};
    for(int i=0;i<n;i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            // freq[s[i]-'A']++;
            s[i] += 32;
        }
 
        freq[s[i]-'a']++;
    }
 
    for(int i=0;i<26;i++) {
        if (!freq[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
