class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int area=INT_MIN;
        while(start<end){
            int result=min(height[start],height[end])*(end-start);
            area=max(result,area);
            if(height[start]<height[end]){
                start++;
            }
            else
               end--;
            
            
        }
        return area;
        
        
        
    }
};