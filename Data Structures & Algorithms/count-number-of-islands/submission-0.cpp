class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;

        queue<pair<int,int>> q;

        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {

                if(grid[i][j] != '1')
                    continue;

                islands++;

                grid[i][j] = '2';
                q.push({i,j});

                while(!q.empty()) {

                    auto curr = q.front();
                    q.pop();

                    int r = curr.first;
                    int c = curr.second;

                    // Up
                    if(r-1>=0 && grid[r-1][c]=='1') {
                        grid[r-1][c]='2';
                        q.push({r-1,c});
                    }

                    // Down
                    if(r+1<rows && grid[r+1][c]=='1') {
                        grid[r+1][c]='2';
                        q.push({r+1,c});
                    }

                    // Left
                    if(c-1>=0 && grid[r][c-1]=='1') {
                        grid[r][c-1]='2';
                        q.push({r,c-1});
                    }

                    // Right
                    if(c+1<cols && grid[r][c+1]=='1') {
                        grid[r][c+1]='2';
                        q.push({r,c+1});
                    }
                }
            }
        }

        return islands;
    }
};