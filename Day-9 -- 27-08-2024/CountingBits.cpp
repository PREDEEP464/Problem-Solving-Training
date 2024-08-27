class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans(n + 1, 0);
        int off = 1;

        for (int i = 1; i <= n; ++i) {
            if (off * 2 == i) {
                off = off * 2;
            }
            ans[i] = ans[i - off] + 1;
        }
        return ans;
        
    }
};