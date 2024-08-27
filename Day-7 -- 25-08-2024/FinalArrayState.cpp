class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        int n = nums.size();

        for(int i=0;i<k;i++)
        {
            int mini = 0;
            for(int j=1;j<n;j++)
            {
                if(nums[j]<nums[mini])
                    mini = j;
            }

            nums[mini] = nums[mini] * multiplier;
        }

        return nums;
    }
};