class Solution {
    public int[] nextGreaterElements(int[] nums) 
    {
        int n=nums.length;
        Stack<Integer> st=new Stack();

        int[] sol=new int[n];

        Arrays.fill(sol, -1); 
        int k=n-1;

        for(int i=2*n-1; i>=0; i--)
        {
            while(!st.isEmpty() && nums[i%n]>=st.peek())
                st.pop();
            
            if(!st.isEmpty() && i<n)
                sol[i]=st.peek();
            
            st.push(nums[i%n]);
        }
        
        return sol;
    }
}