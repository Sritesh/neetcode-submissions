class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j= heights.size()-1;
        int count =0;

        while(i<j)
        {
            int height  = min(heights[i],heights[j]);
            int width = j-i;

            count = max(count, height*width);

            if(heights[i]<heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        
        return count;
    }
};
