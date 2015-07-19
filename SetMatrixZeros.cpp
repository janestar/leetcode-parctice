class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int rowcnt = matrix.size();
      int colcnt = matrix[0].size();
      int row[rowcnt],col[colcnt];
      memset(row,0,rowcnt*sizeof(int));
      memset(col,0,colcnt*sizeof(int));
      for(int i=0;i<rowcnt;i++){
        for(int j=0;j<colcnt;j++){
            if(matrix[i][j]==0)
            {
              row[i]=1;
              col[j]=1;
              } 
        }
      }
      for(int i=0;i<rowcnt;i++)
        if(row[i])matrix[i].assign(colcnt,0);
      for(int i=0;i<colcnt;i++){
        if(col[i]){
           for(int j=0;j<rowcnt;j++)
             matrix[j][i]=0;
        }
      }
        
    }
};