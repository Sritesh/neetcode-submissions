class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!= t.size())
        {
            return false;
        }
        unordered_map<char,int> result;

        for(auto& i:s)
        {
            result[i]++;
        }

        for(auto& j:t)
        {
          result[j]--;
        }
         
         for(auto& i:result)
         {
        if(i.second!=0)
          {
            return false;
          }
        }
        return true;
    }
};
