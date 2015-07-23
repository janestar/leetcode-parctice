class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size=nums.size();
        int i=0,j=size-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(target>nums[mid]){
                i=mid+1;
            }
            else if(target<nums[mid]){
                j=mid-1;
            }
            else{
                return mid;
            }
            
            
        }
        return i;
    
    }
};