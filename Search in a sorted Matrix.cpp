class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        if(mat.empty() || mat[0].empty()){
            return false;
        }
        int n = mat.size();
        int m = mat[0].size();
        int row=0;
        int col= m-1;
        while(row<n && col >=0){
            if(mat[row][col]==x){
                return true;
            }
            else if (mat[row][col]>x){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};
