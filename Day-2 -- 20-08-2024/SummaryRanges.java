class Solution {
    public List<String> summaryRanges(int[] nums) {
        int n = nums.length;
        List<String> li = new ArrayList<>();

        if(n==0)
            return li;

        int st=nums[0];
        int en=nums[0];

        for(int i=1;i<n;i++)
        {
            if(nums[i]==en+1)
            {
                en=nums[i];
            }
            else
            {
                if(st==en)
                    li.add(String.valueOf(st));
                else
                    li.add(st+"->"+en); 
                
                st=nums[i];
                en=nums[i];                    

            }
            

        }
        if(st==en)
            li.add(String.valueOf(st));
        else
            li.add(st+"->"+en); 

        return li;        
    }
}