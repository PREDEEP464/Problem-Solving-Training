class Solution {
public:

    bool canEqual(int a, int b)
    {
        string s1 = to_string(a);
        string s2 = to_string(b);

        if(s1==s2)
            return true;
        if(canSwap(s1,s2))
            return true;
        if(canSwap(s2,s1))
            return true;
        
        return false;
    }


    int countPairs(vector<int>& nums) 
    {
        int n = 0;
        for(size_t i=0; i<nums.size(); i++)
        {
            for(size_t j=i+1; j<nums.size(); j++)
            {
                if(canEqual(nums[i],nums[j]))
                    n++;
            }
        }
        return n;
        
    }

private:
    bool canSwap(const string &s1, const string s2)
    {
        for(size_t i=0; i<s1.size();i++)
        {
            for(size_t j=i+1;j<s1.size();j++)
            {
                string arr = s1;
                swap(arr[i],arr[j]);

                if(std::stoi(arr) == std::stoi(s2))
                    return true;
                swap(arr[i],arr[j]);
            }
        }
        return false;
    }    
};