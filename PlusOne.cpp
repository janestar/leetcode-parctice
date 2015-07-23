class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        std::vector<int> v;
        digits[size-1]+=1;
        for(int i=size-1;i>=0;i--){
           int s=(digits[i])%10;
           int t=(digits[i])/10;
           digits[i]=s;
           v.push_back(digits[i]);
           if(i-1>=0)
             digits[i-1]+=t;
           else{
        	  if(t>0)
        	  	v.push_back(t);
           }
          

        }
        reverse(v.begin(),v.end());
        return v;
    }
};