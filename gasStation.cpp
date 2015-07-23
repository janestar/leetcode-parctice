class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int size = gas.size();
      int j=-1;
      int tmp=0;
      int total =0;
      for(int i=0;i<size;i++){
         tmp += gas[i]-cost[i];
         total += gas[i]-cost[i];
         if(tmp<0){
            tmp=0;
            j=i;
         }
    
      }
      return total>=0?j+1:-1;
        
    }
};