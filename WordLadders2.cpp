class Solution {
public:
    vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict) {

    }
        

        
        
        
        
  
     bool judge(string a,string b){
         if(a==""||b=="")return false;
         int size = a.size();
         int cnt = 0;
         for(int i=0;i<size;i++){
            if(a[i] != b[i])
            	cnt++;
         }
         if(cnt != 1) return false;
         return true;
          
     }

private:
	std::vector<std::vector<string>> v;

    
};