class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char> stk;
        string sol;

        for(int i=0;i<s.size();i++)
        {
            if(stk.size()==0)
                stk.push(s[i]);
            else if(s[i] == stk.top())
                stk.pop();
            else
                stk.push(s[i]);
        }

        while(stk.size()!=0)
        {
            sol = sol + stk.top();
            stk.pop();
        }
        
        reverse(sol.begin(),sol.end());
        return sol;
    }
};