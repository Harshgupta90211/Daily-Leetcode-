class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int t=x, b=x+k-1; t<b; t++, b--){//Move t, b 2 pointers
    for(int j=y; j<y+k; j++)// trasverse the col among [y,y+k)
        swap(grid[t][j], grid[b][j]);// swap grid[t][j]& grid[b][j]
}
return grid;
    }
};