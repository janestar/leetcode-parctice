class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int size = nums.size();
      for(int i=0;i<size;i++){
        int flag=false;
        for(int j=i+1;j<size;j++){
           if(!XOR(nums[i],nums[j])){
                 flag=true;
           }
            
        }
        if(!flag)return nums[i];
      }
        
    }
private:
  int XOR(int a,int b){
    if(a==b)return 0;
    else return 1;
  }
};



class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int x=0;
      for(auto i:nums){
        x^=i;
      }
      return x;
    }

};