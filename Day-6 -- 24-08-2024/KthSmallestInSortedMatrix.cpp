class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        vector<int> ele;

        for(const auto& row : matrix)
        {
            for(int num : row)
                ele.push_back(num);
        }

        sort(ele.begin(),ele.end());

        return ele[k-1];
        
    }
};