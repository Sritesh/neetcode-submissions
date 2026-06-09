class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int> result;
        
        for(auto& i:nums)
        {
            if(++result[i] > 1)
             {
                return true;
             }
        }
        
        

        return false;
    }
};