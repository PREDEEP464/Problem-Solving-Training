class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) 
    {
        int sumCost = 0;

        for(int c : cost)
            sumCost += c;
        
        int sumGas = 0;
        for(int g : gas)
            sumGas += g;
        
        if(sumCost > sumGas)
            return -1;

        int currGas = 0;
        int start = 0;

        for(int i=0;i<gas.length;i++)
        {
            currGas += gas[i] - cost[i];

            if(currGas<0)
            {
                currGas=0;
                start=i+1;
            }
        }

        return start;
        
    }
}