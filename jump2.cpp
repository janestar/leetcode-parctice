//贪心法思路：
// 当前位置i 能到达的最远位置为i+nums［i］，求在当前位置的基础上到达最远位置需要的步数为result[maxIndex++]=result[i]+1;
//
class Solution {
public:
    int jump(vector<int>& nums) {
        int size=nums.size();
        vector<int> result(size,INT_MAX);
        result[0]=0;
        int maxIndex=1;
        for(int i=0;i<size;i++){
            while(maxIndex<=nums[i]+i&&maxIndex<size){
                result[maxIndex++]=result[i]+1;
            }
        }
        return result[size-1];
        
    }
};