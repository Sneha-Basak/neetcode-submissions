class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l=0,r=n-1;
        int maxArea = 0;
        while(l<r){
            int width = r-l;
            int height = min(heights[r],heights[l]);
            int area = width * height;
            maxArea = max(maxArea,area);
            if(heights[r]<heights[l]) r--;
            else l++;
        }
        return maxArea;
    }
};
