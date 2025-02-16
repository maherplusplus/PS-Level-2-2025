// Problem Link: 
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

void maherplusplus() {
    string s;
    cin >> s;
 
    int freq[26]{};
    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']++;
    }
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
}

