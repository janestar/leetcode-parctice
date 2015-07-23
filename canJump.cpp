class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return false;
        int size=nums[0];
        for(int i=1;i<n;i++)
          if(size>0){
              size--;
              size=max(size,nums[i]);
          }
          else{
              return false;
          }
        return true;
    }
};