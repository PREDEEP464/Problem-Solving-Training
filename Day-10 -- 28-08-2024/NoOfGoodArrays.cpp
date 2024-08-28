class Solution {
public:
    long long countGood(vector<int>& nums, int k) 
    {
        map<int, int> frequencyMap; 
        long long result = 0; 
        long long pairCount = 0;  
        int l = 0; 

        for (int r = 0; r < nums.size(); ++r) 
        {
            frequencyMap[nums[r]]++;
            pairCount += (frequencyMap[nums[r]] - 1);

            while (pairCount >= k) 
            {
                result += (nums.size() - r);

                frequencyMap[nums[l]]--;
                pairCount -= (frequencyMap[nums[l]]);
                
                if (frequencyMap[nums[l]] == 0)
                    frequencyMap.erase(nums[l]);
                l++;
            }
        }

        return result;
    }
};
