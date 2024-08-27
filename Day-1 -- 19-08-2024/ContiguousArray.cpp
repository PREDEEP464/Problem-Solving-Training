class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        unordered_map<int,int> newmap;
        int sum=0;
        int longsub=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
               sum = sum - 1;
            else
                sum = sum + 1;

            if(sum==0)
            {
                if(longsub<i+1)
                    longsub=i+1;
            } 
            else if(newmap.find(sum)!=newmap.end())
            {
                if(longsub<i-newmap[sum])
                    longsub = i - newmap[sum];
            }
            else
                newmap[sum]=i;
        }

        return longsub;
    }
};