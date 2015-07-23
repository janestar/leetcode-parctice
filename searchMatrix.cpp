class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size=matrix.size();
        int subsize=matrix[0].size();
        int i=0,j=size-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(target>matrix[mid][subsize-1]){
                i=mid+1;
            }
            else if(target<matrix[mid][0]){
                j=mid-1;
            }
            else if(target>=matrix[mid][0]){
                std::vector<int>::iterator it=find(matrix[mid].begin(),matrix[mid].end(),target);
               if(it==matrix[mid].end())return false;
               else return true;
            }
            
        }
        return false;
        
        
    }
};