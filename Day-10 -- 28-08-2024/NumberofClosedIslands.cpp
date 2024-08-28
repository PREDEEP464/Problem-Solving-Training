class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ROWS = grid.size();
        int COLS = grid[0].size();

        set<pair<int, int>> visit;

        function<int(int, int)> dfs = [&](int r, int c) -> int 
        {
            if (r < 0 || c < 0 || r >= ROWS || c >= COLS) 
                return 0;
            if (grid[r][c] == 1 || visit.count({r, c})) 
                return 1; 

            visit.insert({r, c});

            int res = 1;
            return res &= dfs(r + 1, c),
                   res &= dfs(r - 1, c),
                   res &= dfs(r, c + 1),
                   res &= dfs(r, c - 1);
        };

        int res = 0;
        for (int r = 0; r < ROWS; ++r) 
        {
            for (int c = 0; c < COLS; ++c) 
            {
                if (grid[r][c] == 0 && !visit.count({r, c}))
                    res += dfs(r, c);
            }
        }
        return res;
    }
};
