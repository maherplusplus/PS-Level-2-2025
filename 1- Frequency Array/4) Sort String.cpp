// Problem Link:
// https://codeforces.com/group/wNS3GwuHOE/contest/435607/problem/P

 void maherplusplus() {
    char c;
    int n;
    cin >> n;
 
    int freq[26]{};
    for (int i = 0; i < n; i++) {
        cin >> c;
        freq[c - 'a']++;
    }
 
    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            cout << char(i + 'a');
        }
    }
}
