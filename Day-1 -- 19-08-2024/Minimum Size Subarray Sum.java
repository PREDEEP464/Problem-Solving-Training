class Solution {
    public int minSubArrayLen(int target, int[] nums) 
    {
        int no = nums.length;
        int l = 0;
        int r = 0;
        int sum = 0;

        int sol = Integer.MAX_VALUE;
        int curr = 0;

        while(r<no)
        {
            sum = sum + nums[r];

            while(sum>=target)
            {
                curr = r - l + 1;
                sol = Math.min(sol,curr);

                sum = sum - nums[l];
                l++;
            }
            r++;
        }

        if(sol==Integer.MAX_VALUE)
            return 0;
        else
            return sol;

        
    }
}