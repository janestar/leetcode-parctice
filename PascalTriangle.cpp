class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> a(rowIndex+1);
       a[0] = 1;
       for(int i =1;i<= rowIndex;i++)
       	  for(int j =i;j>0;j--)
       	  	  if(j == i)
       	  	  	 a[j] = 1;
       	  	  else
       	  	  	  a[j] = a[j-1] + a[j]
        return a;


        
    }
};