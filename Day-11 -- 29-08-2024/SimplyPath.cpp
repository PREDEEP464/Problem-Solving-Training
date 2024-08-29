class Solution {
public:
    string simplifyPath(string path) 
    {
        stack<string> st;
        string temp, res;

        for( int i=0; i<path.size(); i++)
        {
            temp.clear();

            if ( path[i] == '/' )
                continue;

            while(i<path.size() && path[i] != '/')
            {
                temp += path[i];
                i++;
            }

            if ( temp == ".." )
            {
                if (!st.empty())
                    st.pop();
            }

            else if ( temp == "." )
                continue;
            else

                st.push(temp);
        }

        while (!st.empty())
        {
            res = "/"+st.top()+res;
            st.pop();
        }

        return res.size() == 0?"/":res;
    }

};