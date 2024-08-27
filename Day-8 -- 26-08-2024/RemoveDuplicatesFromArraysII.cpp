class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) 
            return n;

        int k = 1; 
        for (int i = 2; i < n; ++i) 
        {
            if (nums[i] != nums[k] || nums[i] != nums[k-1])
                nums[++k] = nums[i];
        }
        return k + 1; 
    }
};
