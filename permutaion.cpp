class Solution {
public:

    void search(int cur,int n,vector<vector<int>>& res,vector<int>& vec,vector<int> nums,vector<int>&flag){
        if(cur>=n)
        {
            res.push_back(vec);
            return;
        }
        for(int i=0;i<n;i++)
        { 
                if(!flag[i])
                {
                flag[i]=1;
                vec.push_back(nums[i]);
                search(cur+1,n,res,vec,nums,flag);
                vec.pop_back();
                flag[i]=0;
                }  
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> vec;
        vector<int> flag(nums.size(),0);
        vector<vector<int>> res;
        int size=nums.size();
        search(0,size,res,vec,nums,flag);
        return res;

    }
};
