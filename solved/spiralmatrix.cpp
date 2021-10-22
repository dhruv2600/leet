class Solution {
public:
    vector <int> result;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int> res;
        int startcol=0;
        int startrow=0;
        int endrow=rows-1;
        int endcol=cols-1;
        while(startrow<=endrow && startcol<=endcol)
        {
        for(int j=startcol;j<=endcol;j++)
        {
            if(matrix[startrow][j]!=-101)
            {
                res.push_back(matrix[startrow][j]);
                matrix[startrow][j]=-101;
            }

        }
        for(int i=startrow;i<=endrow;i++)
        {
            if(matrix[i][endcol]!=-101)
            {
                res.push_back(matrix[i][endcol]);
                matrix[i][endcol]=-101;
            }
        }
        for(int i=endcol;i>=startcol;i--)
        {
            if(matrix[endrow][i]!=-101)
            {
                 res.push_back(matrix[endrow][i]);
                 matrix[endrow][i]=-101;
            }
        }
        for(int i=endrow;i>=startrow;i--)
        {
            if(matrix[i][startcol]!=-101)
            {
                res.push_back(matrix[i][startcol]);
                matrix[i][startcol]=-101;
            }
        }
            startrow++;
            startcol++;
            endrow--;
            endcol--;
        }
        return res;
    }
};
