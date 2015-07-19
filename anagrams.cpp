class Solution {
public:
    vector<string> anagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> s;
        for(auto i:strs){
            string key = i;
            sort(key.begin(),key.end());
            strs[key].push_back(i);
        }
        std::vector<string> v;
        for(auto j=strs.begin();j!=strs.end();j++){
           if(j->second.size()>1){
              v.insert(v.end(),j->second.begin(),j->second.end());
           }
        }
        return v;
    }
};