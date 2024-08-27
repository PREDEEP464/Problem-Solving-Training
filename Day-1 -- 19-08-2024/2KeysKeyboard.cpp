class Solution {
    public int minSteps(int n) 
    {
        if(n==1)
            return 0;
        
        int val = 0;
        int var = 2;
        while(n>1)
        {
            while(n%var==0)
            {
                val=val+var;
                n=n/var;
            }
            var++;
        }
        return val;



    }
}