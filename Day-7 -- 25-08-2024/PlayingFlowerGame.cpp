class Solution {
public:
    long long flowerGame(int n, int m) 
    {
        long long oddyN = n/2 + n%2;
        long long evenyN = n/2;

        long long oddyM = m/2 + m%2;
        long long evenyM = m/2;

        long long sol = oddyN * evenyM + evenyN * oddyM;

        return sol;
        
    }
};