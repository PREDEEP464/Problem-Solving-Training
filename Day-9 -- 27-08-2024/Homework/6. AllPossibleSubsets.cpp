#include<stdio.h>

vector<vector<int>> generateSubsets(const vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> subsets;
    for (int i = 0; i < (1 << n); ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(arr[j]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}
