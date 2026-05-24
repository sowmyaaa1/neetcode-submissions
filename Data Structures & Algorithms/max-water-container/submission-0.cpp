class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=INT_MIN, maxArea=INT_MIN;
        for(int i=0;i<heights.size();i++){
            int minArea=0;
            for(int j=i+1;j<heights.size();j++){
                minArea=min(heights[j], heights[i]);
                area=(j-i)*minArea;
                maxArea=max(area, maxArea);
            }
        }
        return maxArea;
    }
};
