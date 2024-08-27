class Solution {
    public int countPrimes(int n) 
    {
        if(n<2)
            return 0;

        boolean[] prime = new boolean[n];
        
        for(int i=2;i<n;i++)
            prime[i]=true;

        for(int i=2;i<=Math.sqrt(n);i++)
        {
            if(prime[i]==true)
            {
                for(int j=i*i;j<n;j=j+i)
                    prime[j]=false;
            }
        } 

        int cnt = 0;
        for(int i=2;i<n;i++)
        {
            if(prime[i]==true)
                cnt++;
        }
        return cnt;
    }
}