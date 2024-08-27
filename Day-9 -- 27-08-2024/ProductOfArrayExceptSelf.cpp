class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();

        long long cnt;

        vector<int> sol(n, 1);

        int prod = 1;

        for (int i : nums)
            prod = prod * i;

        if (prod != 0) 
        {
            for (int i = 0; i < n; i++) 
                sol[i] = prod / nums[i];
        } 
        else 
        {
            for (int j = 0; j < n; j++)
            {
                if (nums[j] == 0)
                {
                    for (int i = 0; i < n; i++) 
                    {
                        if (i != j)
                            cnt *= nums[i];
                    }

                sol[j] = cnt;
                cnt=1;
                }

                else
                    sol[j]=prod;
            }
        }
    
    return sol;
}
};