class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=INT_MIN;
        int i=0;
        int j=n-1;
            while(i<=j) {
                int length=min(height[i],height[j]);
                int width=j-i;
            area=max(area, length*width);
            if(height [i]<height[j]) {
            i++;
        }
        else {
            j--;
        }
        }
        
        return area;
    }
};
