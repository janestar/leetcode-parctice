class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         auto size = nums.size();
         int pos = -1;
         for(auto i=size-1;i>0;i--){
             if(nums[i]>nums[i-1]){
               pos =i-1;
               break;
           }
         }
         if(pos<0) {
         	reverse(nums.begin(),nums.end());
            return;                             
         }
         for(auto i=size-1;i>pos;i--){
            if(nums[i]>nums[pos]){
                 int tmp = nums[i];
                 nums[i] = nums[pos];
                 nums[pos] = tmp;
                 break;

            }

         }
         reverse(nums.begin()+pos+1,nums.end());
         return ;

        
    }
};
