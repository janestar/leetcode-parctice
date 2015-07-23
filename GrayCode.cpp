//可以看到第n位的格雷码由两部分构成，一部分是n-1位格雷码，再加上 1<<(n-1)和n-1位格雷码的逆序的和
class Solution {
public:
    vector<int> grayCode(int n) {
      if(n==0){
         std::vector<int> v;
         v.push_back(0);
         return v;
      }
      std::vector<int> v2=grayCode(n-1);
      int addNumber = 1<<(n-1);
      std::vector<int> result(v2);
      for(int i=v2.size()-1;i>=0;i--){
         result.push_back(addNumber+v2[i]);
      }
       return result; 
    }
};