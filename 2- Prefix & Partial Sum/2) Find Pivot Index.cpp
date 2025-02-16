// Problem Link:
// https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int>pre(n);
        pre[0] = arr[0];

        for (int i = 1; i < n; i++){
            pre[i] = pre[i - 1] + arr[i];
        }

        if(pre[n - 1] - pre[0] == 0) return 0;
        for (int i = 1; i < n; i++){
            int left  = pre[i - 1];
            int right = pre[n - 1] - pre[i];

            if (left == right) return i;
        }
        return -1;
    }
};
