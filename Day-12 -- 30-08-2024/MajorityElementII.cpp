class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> cntmap;
        
        for(int i = 0; i < nums.size(); i++)
            cntmap[nums[i]]++;
        
        vector<int> majele;
        int threshold = nums.size() / 3;
        

        for(auto pairs : cntmap) 
        {
            int element = pairs.first;
            int count = pairs.second;
            
            if(count > threshold)
                majele.push_back(element);
        }
        
        return majele; 
    }
};