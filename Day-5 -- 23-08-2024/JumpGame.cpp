class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n = nums.size();

        if (n <= 1) 
            return 0;

        vector<int> v(n);

        for (int i = 0; i < n - 1; i++) 
            v[i] = i + nums[i];
    
        v[n - 1] = n - 1;

        int jumps = 0, start = 0, end = 0;

        for (int i = 0; i < n - 1; i++) 
        {
            end = max(end, v[i]);

            if (i == start) 
            {
                jumps++;
                start = end;

                if (start >= n - 1) 
                    break;
            }
        }
        
        return jumps;
    }
};