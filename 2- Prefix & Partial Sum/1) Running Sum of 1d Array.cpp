// Problem Link:
// https://leetcode.com/problems/running-sum-of-1d-array/description/

class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++){
            arr[i] += arr[i - 1];
        }
        return arr;
    }
};
