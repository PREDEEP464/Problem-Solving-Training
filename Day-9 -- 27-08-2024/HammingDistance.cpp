class Solution {
public:
    int hammingDistance(int x, int y) {

        int cnt=0;

        for(int i=31;i>=0;i--)
        {
            int frst=(x&(1<<i));
            int sec=(y&(1<<i));

            if(frst!=sec)
                cnt++;
        }
        
        return cnt;
        
    }
};