// Problem Link:
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

void maherplusplus() {
    int n,m;
    cin >> n >> m;
 
    int arr[n];
    vector<int> freq(m + 1,0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
 
        freq[arr[i]]++;
    }
 
    for (int i = 1; i <= m; i++) {
        cout << freq[i] << endl;
    }
}
