class NumArray 
{
public:
    vector<int>& value;
    NumArray(vector<int>& nums) : value(nums)
    {
        for(int i=1;i<value.size();i++) 
        {
            nums[i] = nums[i] + nums[i-1];
        }
        
    }
    
    int sumRange(int left, int right) 
    {
        if(left==0)
            return value[right];
        else
            return value[right]-value[left-1];
        
        
    }
};
