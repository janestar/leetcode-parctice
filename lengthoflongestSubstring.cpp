class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int last[256];
        fill(last,last+256,-1);
        int start=0;
        int max_len=0;
        for(int i=0;i<s.size();i++){
            if(last[s[i]]>=start){
                max_len=max(max_len,i-start);
                start=last[s[i]]+1;
            }
            
            last[s[i]]=i;
        }
        return max(max_len,(int)(s.size()-start));
        
        
        
    }
        
};