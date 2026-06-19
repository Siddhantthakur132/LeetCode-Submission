class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<vector<int>>temp;
       temp=matrix;
       int n=matrix.size();
       int m=matrix[0].size();

       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                 // 1. Clear row 'i': iterate through all 'm' columns
                    for(int k = 0; k < m; k++) {
                        temp[i][k] = 0; 
                    }
                    
                    // 2. Clear column 'j': iterate through all 'n' rows
                    for(int l = 0; l < n; l++) {
                        temp[l][j] = 0;
                    }
            }
        }

       }
       matrix=temp;
    }
};