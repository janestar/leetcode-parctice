class Solution {
public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordDict) {
       if(beginWord==""||endWord==""||beginWord.size()!=endWord.size()||beginWord.compare(endWord)==0)return 0;
       if(judge(beginWord,endWord))return 2;
       queue<string> q;
       unordered_map<string,int> map;
       q.push(beginWord);
       map.insert({beginWord,1});
       while(!q.empty()){
           string head = q.front();
           q.pop();
           int dis = map.at(head);
           for(int i=0;i<head.size();i++){
               for(char j='a';j<'z';j++){
                   if(head[i]==j)continue;
                   string tmp = head;
                   tmp[i]=j;
                   if(tmp.compare(endWord)==0)return dis+1;
                   if(wordDict.find(tmp)!=wordDict.end()&&map.find(tmp)==map.end()){
                       map.insert({tmp,dis+1});
                       q.push(tmp);
                       
                   }
                   
               }
    
               
           }

       }
       
        
    }
    
private:
    bool judge(string a,string b){
        int size_a = a.size();
        int size_b = b.size();
        if(size_a != size_b){
            return false;
        }
        int cnt = 0;
        for(int i=0;i<size_a;i++){
            if(a[i]!=b[i])cnt++;
        }
        if(cnt == 1)return true;
        else return false;
        
    }
};