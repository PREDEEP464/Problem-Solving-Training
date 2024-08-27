#include <vector>

using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded) 
    {
        int n = encoded.size() + 1;
        vector<int> res(n);

        int totalXor = 0;
        for (int i = 1; i <= n; ++i)
            totalXor ^= i;

        int encodedXor = 0;
        for (int i = 1; i < encoded.size(); i += 2)
            encodedXor ^= encoded[i];

        res[0] = totalXor ^ encodedXor;

        for (int i = 0; i < encoded.size(); ++i) 
            res[i + 1] = res[i] ^ encoded[i];
        
        return res;
    }
};
