Solution 1
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                swap(matrix[i][j],matrix[n-j-1][n-i-1]);
            }
        }
           for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n;j++)
            {
                swap(matrix[i][j],matrix[n-i-1][j]);
            }
        }


    }
};





solution 2
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                swap(matrix[i][j],matrix[n-j-1][n-i-1]);
            }
        }
           for (int i = 0; i < n; i++) {
         for (int j = 0; j < n / 2; j++) {
             int tmp = matrix[j][i];
             matrix[j][i] = matrix[n - j - 1][i];
             matrix[n - j - 1][i] = tmp;
         }
     }


    }
};
