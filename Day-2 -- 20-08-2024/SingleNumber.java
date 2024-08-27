class Solution {
    public int singleNumber(int[] nums) 
    {
        int no = nums.length;
        int c=0;

        for(int i=0;i<no;i++)
            c = c^nums[i];
        
        return c;
        
    }
}