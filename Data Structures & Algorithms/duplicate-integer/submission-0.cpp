class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int> result;
        
        for(auto& i:nums)
        {
            result[i]++;
        }
        
        for(auto& i:result)
        {
            if(i.second > 1)
            {
                return true;
            }
        }

        return false;
    }
};